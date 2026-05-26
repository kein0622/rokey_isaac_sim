
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_Goal() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteArmTask_Goal__init(msg: *mut ExecuteArmTask_Goal) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Goal>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Goal>);
    fn isaac_interfaces__action__ExecuteArmTask_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmTask_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Goal>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmTask_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: rosidl_runtime_rs::String,

}



impl Default for ExecuteArmTask_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteArmTask_Goal__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteArmTask_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmTask_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmTask_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmTask_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteArmTask_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_Goal() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_Result() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteArmTask_Result__init(msg: *mut ExecuteArmTask_Result) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Result>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Result>);
    fn isaac_interfaces__action__ExecuteArmTask_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmTask_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Result>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmTask_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ExecuteArmTask_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteArmTask_Result__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteArmTask_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmTask_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmTask_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmTask_Result where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteArmTask_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_Result() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteArmTask_Feedback__init(msg: *mut ExecuteArmTask_Feedback) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Feedback>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Feedback>);
    fn isaac_interfaces__action__ExecuteArmTask_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmTask_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_Feedback>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmTask_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ExecuteArmTask_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteArmTask_Feedback__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteArmTask_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmTask_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmTask_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmTask_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteArmTask_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_Feedback() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__init(msg: *mut ExecuteArmTask_FeedbackMessage) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_FeedbackMessage>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_FeedbackMessage>);
    fn isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmTask_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_FeedbackMessage>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmTask_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExecuteArmTask_Feedback,

}



impl Default for ExecuteArmTask_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmTask_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmTask_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmTask_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteArmTask_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_FeedbackMessage() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_Goal() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteDriveTask_Goal__init(msg: *mut ExecuteDriveTask_Goal) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Goal>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Goal>);
    fn isaac_interfaces__action__ExecuteDriveTask_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteDriveTask_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Goal>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteDriveTask_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: rosidl_runtime_rs::String,

}



impl Default for ExecuteDriveTask_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteDriveTask_Goal__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteDriveTask_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteDriveTask_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteDriveTask_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteDriveTask_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteDriveTask_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_Goal() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_Result() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteDriveTask_Result__init(msg: *mut ExecuteDriveTask_Result) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Result>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Result>);
    fn isaac_interfaces__action__ExecuteDriveTask_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteDriveTask_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Result>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteDriveTask_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ExecuteDriveTask_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteDriveTask_Result__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteDriveTask_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteDriveTask_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteDriveTask_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteDriveTask_Result where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteDriveTask_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_Result() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteDriveTask_Feedback__init(msg: *mut ExecuteDriveTask_Feedback) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Feedback>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Feedback>);
    fn isaac_interfaces__action__ExecuteDriveTask_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteDriveTask_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_Feedback>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteDriveTask_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ExecuteDriveTask_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteDriveTask_Feedback__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteDriveTask_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteDriveTask_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteDriveTask_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteDriveTask_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteDriveTask_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_Feedback() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__init(msg: *mut ExecuteDriveTask_FeedbackMessage) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_FeedbackMessage>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_FeedbackMessage>);
    fn isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteDriveTask_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_FeedbackMessage>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteDriveTask_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExecuteDriveTask_Feedback,

}



impl Default for ExecuteDriveTask_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteDriveTask_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteDriveTask_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteDriveTask_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteDriveTask_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_Goal() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__NavigateTask_Goal__init(msg: *mut NavigateTask_Goal) -> bool;
    fn isaac_interfaces__action__NavigateTask_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Goal>, size: usize) -> bool;
    fn isaac_interfaces__action__NavigateTask_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Goal>);
    fn isaac_interfaces__action__NavigateTask_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTask_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Goal>) -> bool;
}

// Corresponds to isaac_interfaces__action__NavigateTask_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTask_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: rosidl_runtime_rs::String,

}



impl Default for NavigateTask_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__NavigateTask_Goal__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__NavigateTask_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTask_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTask_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTask_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/NavigateTask_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_Goal() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_Result() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__NavigateTask_Result__init(msg: *mut NavigateTask_Result) -> bool;
    fn isaac_interfaces__action__NavigateTask_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Result>, size: usize) -> bool;
    fn isaac_interfaces__action__NavigateTask_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Result>);
    fn isaac_interfaces__action__NavigateTask_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTask_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Result>) -> bool;
}

// Corresponds to isaac_interfaces__action__NavigateTask_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTask_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for NavigateTask_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__NavigateTask_Result__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__NavigateTask_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTask_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTask_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTask_Result where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/NavigateTask_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_Result() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__NavigateTask_Feedback__init(msg: *mut NavigateTask_Feedback) -> bool;
    fn isaac_interfaces__action__NavigateTask_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Feedback>, size: usize) -> bool;
    fn isaac_interfaces__action__NavigateTask_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Feedback>);
    fn isaac_interfaces__action__NavigateTask_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTask_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_Feedback>) -> bool;
}

// Corresponds to isaac_interfaces__action__NavigateTask_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTask_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for NavigateTask_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__NavigateTask_Feedback__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__NavigateTask_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTask_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTask_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTask_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/NavigateTask_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_Feedback() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__NavigateTask_FeedbackMessage__init(msg: *mut NavigateTask_FeedbackMessage) -> bool;
    fn isaac_interfaces__action__NavigateTask_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_FeedbackMessage>, size: usize) -> bool;
    fn isaac_interfaces__action__NavigateTask_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_FeedbackMessage>);
    fn isaac_interfaces__action__NavigateTask_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTask_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_FeedbackMessage>) -> bool;
}

// Corresponds to isaac_interfaces__action__NavigateTask_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTask_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::NavigateTask_Feedback,

}



impl Default for NavigateTask_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__NavigateTask_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__NavigateTask_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTask_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTask_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTask_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/NavigateTask_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_FeedbackMessage() }
  }
}




#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__init(msg: *mut ExecuteArmTask_SendGoal_Request) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_SendGoal_Request>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_SendGoal_Request>);
    fn isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmTask_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_SendGoal_Request>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmTask_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExecuteArmTask_Goal,

}



impl Default for ExecuteArmTask_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmTask_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmTask_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmTask_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteArmTask_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_SendGoal_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__init(msg: *mut ExecuteArmTask_SendGoal_Response) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_SendGoal_Response>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_SendGoal_Response>);
    fn isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmTask_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_SendGoal_Response>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmTask_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExecuteArmTask_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmTask_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmTask_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmTask_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteArmTask_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_SendGoal_Response() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteArmTask_GetResult_Request__init(msg: *mut ExecuteArmTask_GetResult_Request) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_GetResult_Request>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_GetResult_Request>);
    fn isaac_interfaces__action__ExecuteArmTask_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmTask_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_GetResult_Request>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmTask_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExecuteArmTask_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteArmTask_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteArmTask_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmTask_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmTask_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmTask_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteArmTask_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_GetResult_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteArmTask_GetResult_Response__init(msg: *mut ExecuteArmTask_GetResult_Response) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_GetResult_Response>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteArmTask_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_GetResult_Response>);
    fn isaac_interfaces__action__ExecuteArmTask_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmTask_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmTask_GetResult_Response>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmTask_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExecuteArmTask_Result,

}



impl Default for ExecuteArmTask_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteArmTask_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteArmTask_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmTask_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteArmTask_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmTask_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmTask_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteArmTask_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteArmTask_GetResult_Response() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__init(msg: *mut ExecuteDriveTask_SendGoal_Request) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_SendGoal_Request>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_SendGoal_Request>);
    fn isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteDriveTask_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_SendGoal_Request>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteDriveTask_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExecuteDriveTask_Goal,

}



impl Default for ExecuteDriveTask_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteDriveTask_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteDriveTask_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteDriveTask_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteDriveTask_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__init(msg: *mut ExecuteDriveTask_SendGoal_Response) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_SendGoal_Response>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_SendGoal_Response>);
    fn isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteDriveTask_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_SendGoal_Response>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteDriveTask_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExecuteDriveTask_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteDriveTask_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteDriveTask_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteDriveTask_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteDriveTask_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__init(msg: *mut ExecuteDriveTask_GetResult_Request) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_GetResult_Request>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_GetResult_Request>);
    fn isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteDriveTask_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_GetResult_Request>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteDriveTask_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExecuteDriveTask_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteDriveTask_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteDriveTask_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteDriveTask_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteDriveTask_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_GetResult_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__init(msg: *mut ExecuteDriveTask_GetResult_Response) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_GetResult_Response>, size: usize) -> bool;
    fn isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_GetResult_Response>);
    fn isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteDriveTask_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteDriveTask_GetResult_Response>) -> bool;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteDriveTask_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExecuteDriveTask_Result,

}



impl Default for ExecuteDriveTask_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteDriveTask_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteDriveTask_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteDriveTask_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/ExecuteDriveTask_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_GetResult_Response() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__NavigateTask_SendGoal_Request__init(msg: *mut NavigateTask_SendGoal_Request) -> bool;
    fn isaac_interfaces__action__NavigateTask_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_SendGoal_Request>, size: usize) -> bool;
    fn isaac_interfaces__action__NavigateTask_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_SendGoal_Request>);
    fn isaac_interfaces__action__NavigateTask_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTask_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_SendGoal_Request>) -> bool;
}

// Corresponds to isaac_interfaces__action__NavigateTask_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTask_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::NavigateTask_Goal,

}



impl Default for NavigateTask_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__NavigateTask_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__NavigateTask_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTask_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTask_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTask_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/NavigateTask_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_SendGoal_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__NavigateTask_SendGoal_Response__init(msg: *mut NavigateTask_SendGoal_Response) -> bool;
    fn isaac_interfaces__action__NavigateTask_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_SendGoal_Response>, size: usize) -> bool;
    fn isaac_interfaces__action__NavigateTask_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_SendGoal_Response>);
    fn isaac_interfaces__action__NavigateTask_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTask_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_SendGoal_Response>) -> bool;
}

// Corresponds to isaac_interfaces__action__NavigateTask_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTask_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for NavigateTask_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__NavigateTask_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__NavigateTask_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTask_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTask_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTask_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/NavigateTask_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_SendGoal_Response() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__NavigateTask_GetResult_Request__init(msg: *mut NavigateTask_GetResult_Request) -> bool;
    fn isaac_interfaces__action__NavigateTask_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_GetResult_Request>, size: usize) -> bool;
    fn isaac_interfaces__action__NavigateTask_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_GetResult_Request>);
    fn isaac_interfaces__action__NavigateTask_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTask_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_GetResult_Request>) -> bool;
}

// Corresponds to isaac_interfaces__action__NavigateTask_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTask_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for NavigateTask_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__NavigateTask_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__NavigateTask_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTask_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTask_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTask_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/NavigateTask_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_GetResult_Request() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__action__NavigateTask_GetResult_Response__init(msg: *mut NavigateTask_GetResult_Response) -> bool;
    fn isaac_interfaces__action__NavigateTask_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_GetResult_Response>, size: usize) -> bool;
    fn isaac_interfaces__action__NavigateTask_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_GetResult_Response>);
    fn isaac_interfaces__action__NavigateTask_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTask_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTask_GetResult_Response>) -> bool;
}

// Corresponds to isaac_interfaces__action__NavigateTask_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTask_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::NavigateTask_Result,

}



impl Default for NavigateTask_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__action__NavigateTask_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__action__NavigateTask_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTask_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__action__NavigateTask_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTask_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTask_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/action/NavigateTask_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__action__NavigateTask_GetResult_Response() }
  }
}






#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__ExecuteArmTask_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteArmTask_SendGoal;

impl rosidl_runtime_rs::Service for ExecuteArmTask_SendGoal {
    type Request = ExecuteArmTask_SendGoal_Request;
    type Response = ExecuteArmTask_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__ExecuteArmTask_SendGoal() }
    }
}




#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__ExecuteArmTask_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__action__ExecuteArmTask_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteArmTask_GetResult;

impl rosidl_runtime_rs::Service for ExecuteArmTask_GetResult {
    type Request = ExecuteArmTask_GetResult_Request;
    type Response = ExecuteArmTask_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__ExecuteArmTask_GetResult() }
    }
}




#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteDriveTask_SendGoal;

impl rosidl_runtime_rs::Service for ExecuteDriveTask_SendGoal {
    type Request = ExecuteDriveTask_SendGoal_Request;
    type Response = ExecuteDriveTask_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_SendGoal() }
    }
}




#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__action__ExecuteDriveTask_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteDriveTask_GetResult;

impl rosidl_runtime_rs::Service for ExecuteDriveTask_GetResult {
    type Request = ExecuteDriveTask_GetResult_Request;
    type Response = ExecuteDriveTask_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__ExecuteDriveTask_GetResult() }
    }
}




#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__NavigateTask_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__action__NavigateTask_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateTask_SendGoal;

impl rosidl_runtime_rs::Service for NavigateTask_SendGoal {
    type Request = NavigateTask_SendGoal_Request;
    type Response = NavigateTask_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__NavigateTask_SendGoal() }
    }
}




#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__NavigateTask_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to isaac_interfaces__action__NavigateTask_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateTask_GetResult;

impl rosidl_runtime_rs::Service for NavigateTask_GetResult {
    type Request = NavigateTask_GetResult_Request;
    type Response = NavigateTask_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__isaac_interfaces__action__NavigateTask_GetResult() }
    }
}


