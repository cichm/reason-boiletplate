let component = ReasonReact.statelessComponent("Home");

let make = (~router, _children) => {
  ...component,
  render: (_self) => {
    let gotoHome = (event) => {
      event->ReactEvent.Mouse.preventDefault;
      DirectorRe.setRoute(router, "/")
    };
    <div>
      <a href="#" onClick=gotoHome>(ReasonReact.string("Home"))</a>
    </div>
  }
};