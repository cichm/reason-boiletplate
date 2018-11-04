[%bs.raw {|require('./index.css')|}];

[@bs.module "./serviceWorker"]
external register_service_worker : unit => unit = "register";
[@bs.module "./serviceWorker"]
external unregister_service_worker : unit => unit = "unregister";

type routes =
  | HomeRoute
  | UserRoute;

let router = DirectorRe.makeRouter({
  "/": "home",
  "/user": "user"
});

let renderForRoute = (route) => {
  let element =
    switch route {
    | HomeRoute => <App router />
    | UserRoute => <Home router />
    };
  ReactDOMRe.renderToElementWithId(element, "root")
};

let handlers = {
  "home": () => renderForRoute(HomeRoute),
  "user": () => renderForRoute(UserRoute)
};

DirectorRe.configure(router, {
  "html5history": true,
  "resource": handlers
});

DirectorRe.init(router, "/");

unregister_service_worker();
