#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to isaac_interfaces__srv__CheckSystemReady_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckSystemReady_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub requester: std::string::String,

}



impl Default for CheckSystemReady_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CheckSystemReady_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CheckSystemReady_Request {
  type RmwMsg = super::srv::rmw::CheckSystemReady_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        requester: msg.requester.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        requester: msg.requester.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      requester: msg.requester.to_string(),
    }
  }
}


// Corresponds to isaac_interfaces__srv__CheckSystemReady_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckSystemReady_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub missing_nodes: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for CheckSystemReady_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CheckSystemReady_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CheckSystemReady_Response {
  type RmwMsg = super::srv::rmw::CheckSystemReady_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ready: msg.ready,
        missing_nodes: msg.missing_nodes
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ready: msg.ready,
        missing_nodes: msg.missing_nodes
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ready: msg.ready,
      missing_nodes: msg.missing_nodes
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to isaac_interfaces__srv__ResetSimulation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetSimulation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_world: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_robot: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_mission: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for ResetSimulation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetSimulation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetSimulation_Request {
  type RmwMsg = super::srv::rmw::ResetSimulation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reset_world: msg.reset_world,
        reset_robot: msg.reset_robot,
        reset_mission: msg.reset_mission,
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reset_world: msg.reset_world,
      reset_robot: msg.reset_robot,
      reset_mission: msg.reset_mission,
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reset_world: msg.reset_world,
      reset_robot: msg.reset_robot,
      reset_mission: msg.reset_mission,
      reason: msg.reason.to_string(),
    }
  }
}


// Corresponds to isaac_interfaces__srv__ResetSimulation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetSimulation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ResetSimulation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetSimulation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetSimulation_Response {
  type RmwMsg = super::srv::rmw::ResetSimulation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to isaac_interfaces__srv__SaveExplorationMap_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveExplorationMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_path: std::string::String,

}



impl Default for SaveExplorationMap_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SaveExplorationMap_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SaveExplorationMap_Request {
  type RmwMsg = super::srv::rmw::SaveExplorationMap_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_name: msg.map_name.as_str().into(),
        target_path: msg.target_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_name: msg.map_name.as_str().into(),
        target_path: msg.target_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      map_name: msg.map_name.to_string(),
      target_path: msg.target_path.to_string(),
    }
  }
}


// Corresponds to isaac_interfaces__srv__SaveExplorationMap_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveExplorationMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub saved_path: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SaveExplorationMap_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SaveExplorationMap_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SaveExplorationMap_Response {
  type RmwMsg = super::srv::rmw::SaveExplorationMap_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        saved_path: msg.saved_path.as_str().into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        saved_path: msg.saved_path.as_str().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      saved_path: msg.saved_path.to_string(),
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__srv__CheckSystemReady() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__srv__CheckSystemReady
#[allow(missing_docs, non_camel_case_types)]
pub struct CheckSystemReady;

impl rosidl_runtime_rs::Service for CheckSystemReady {
    type Request = CheckSystemReady_Request;
    type Response = CheckSystemReady_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__srv__CheckSystemReady() }
    }
}




#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__srv__ResetSimulation() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__srv__ResetSimulation
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetSimulation;

impl rosidl_runtime_rs::Service for ResetSimulation {
    type Request = ResetSimulation_Request;
    type Response = ResetSimulation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__srv__ResetSimulation() }
    }
}




#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__srv__SaveExplorationMap() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__srv__SaveExplorationMap
#[allow(missing_docs, non_camel_case_types)]
pub struct SaveExplorationMap;

impl rosidl_runtime_rs::Service for SaveExplorationMap {
    type Request = SaveExplorationMap_Request;
    type Response = SaveExplorationMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__srv__SaveExplorationMap() }
    }
}


