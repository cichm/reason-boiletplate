[%bs.raw {|require('./app.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = (~router, _children) => {
  ...component,
  render: _self => {
    let onSubmit = (event) => {
      Js.log("Navigated active tasks list")
    };

    let password = ref("");
    let email = ref("");
    let isInvalid = password^ == "" || email^ == "";

    <form onSubmit=onSubmit>
        /*<label htmlFor="email">*/
            /*(ReasonReact.string("Home"))*/
        /*</label>*/
        <input
            value=email^
            type_="email"
            placeholder="Email Address"
            required=true
        />
        <div>
            <input
            type_="text"
            name="b_2ff99718c52457a4fa5219f66_3e392893b9"
            tabIndex=(-1)
            />
        </div>
        <button className="destroy">(ReasonReact.string("button"))</button>
    </form>
  }
};
