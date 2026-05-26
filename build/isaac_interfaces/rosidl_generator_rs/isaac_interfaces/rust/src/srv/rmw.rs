#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__CheckSystemReady_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__srv__CheckSystemReady_Request__init(msg: *mut CheckSystemReady_Request) -> bool;
    fn isaac_interfaces__srv__CheckSystemReady_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CheckSystemReady_Request>, size: usize) -> bool;
    fn isaac_interfaces__srv__CheckSystemReady_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CheckSystemReady_Request>);
    fn isaac_interfaces__srv__CheckSystemReady_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CheckSystemReady_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CheckSystemReady_Request>) -> bool;
}

// Corresponds to isaac_interfaces__srv__CheckSystemReady_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckSystemReady_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub requester: rosidl_runtime_rs::String,

}



impl Default for CheckSystemReady_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__srv__CheckSystemReady_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__srv__CheckSystemReady_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CheckSystemReady_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__CheckSystemReady_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__CheckSystemReady_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__CheckSystemReady_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CheckSystemReady_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CheckSystemReady_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/srv/CheckSystemReady_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__CheckSystemReady_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__CheckSystemReady_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__srv__CheckSystemReady_Response__init(msg: *mut CheckSystemReady_Response) -> bool;
    fn isaac_interfaces__srv__CheckSystemReady_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CheckSystemReady_Response>, size: usize) -> bool;
    fn isaac_interfaces__srv__CheckSystemReady_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CheckSystemReady_Response>);
    fn isaac_interfaces__srv__CheckSystemReady_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CheckSystemReady_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CheckSystemReady_Response>) -> bool;
}

// Corresponds to isaac_interfaces__srv__CheckSystemReady_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckSystemReady_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub missing_nodes: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for CheckSystemReady_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__srv__CheckSystemReady_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__srv__CheckSystemReady_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CheckSystemReady_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__CheckSystemReady_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__CheckSystemReady_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__CheckSystemReady_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CheckSystemReady_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CheckSystemReady_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/srv/CheckSystemReady_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__CheckSystemReady_Response() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__ResetSimulation_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__srv__ResetSimulation_Request__init(msg: *mut ResetSimulation_Request) -> bool;
    fn isaac_interfaces__srv__ResetSimulation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Request>, size: usize) -> bool;
    fn isaac_interfaces__srv__ResetSimulation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Request>);
    fn isaac_interfaces__srv__ResetSimulation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetSimulation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Request>) -> bool;
}

// Corresponds to isaac_interfaces__srv__ResetSimulation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub reason: rosidl_runtime_rs::String,

}



impl Default for ResetSimulation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__srv__ResetSimulation_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__srv__ResetSimulation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetSimulation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__ResetSimulation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__ResetSimulation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__ResetSimulation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetSimulation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetSimulation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/srv/ResetSimulation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__ResetSimulation_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__ResetSimulation_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__srv__ResetSimulation_Response__init(msg: *mut ResetSimulation_Response) -> bool;
    fn isaac_interfaces__srv__ResetSimulation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Response>, size: usize) -> bool;
    fn isaac_interfaces__srv__ResetSimulation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Response>);
    fn isaac_interfaces__srv__ResetSimulation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetSimulation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetSimulation_Response>) -> bool;
}

// Corresponds to isaac_interfaces__srv__ResetSimulation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetSimulation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ResetSimulation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__srv__ResetSimulation_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__srv__ResetSimulation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetSimulation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__ResetSimulation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__ResetSimulation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__ResetSimulation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetSimulation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetSimulation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/srv/ResetSimulation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__ResetSimulation_Response() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__SaveExplorationMap_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__srv__SaveExplorationMap_Request__init(msg: *mut SaveExplorationMap_Request) -> bool;
    fn isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveExplorationMap_Request>, size: usize) -> bool;
    fn isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveExplorationMap_Request>);
    fn isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveExplorationMap_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveExplorationMap_Request>) -> bool;
}

// Corresponds to isaac_interfaces__srv__SaveExplorationMap_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveExplorationMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_path: rosidl_runtime_rs::String,

}



impl Default for SaveExplorationMap_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__srv__SaveExplorationMap_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__srv__SaveExplorationMap_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveExplorationMap_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveExplorationMap_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveExplorationMap_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/srv/SaveExplorationMap_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__SaveExplorationMap_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__SaveExplorationMap_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__srv__SaveExplorationMap_Response__init(msg: *mut SaveExplorationMap_Response) -> bool;
    fn isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveExplorationMap_Response>, size: usize) -> bool;
    fn isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveExplorationMap_Response>);
    fn isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveExplorationMap_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveExplorationMap_Response>) -> bool;
}

// Corresponds to isaac_interfaces__srv__SaveExplorationMap_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveExplorationMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub saved_path: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SaveExplorationMap_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__srv__SaveExplorationMap_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__srv__SaveExplorationMap_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveExplorationMap_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveExplorationMap_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveExplorationMap_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/srv/SaveExplorationMap_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__srv__SaveExplorationMap_Response() }
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


