#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__msg__BatteryState() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__msg__BatteryState__init(msg: *mut BatteryState) -> bool;
    fn isaac_interfaces__msg__BatteryState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BatteryState>, size: usize) -> bool;
    fn isaac_interfaces__msg__BatteryState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BatteryState>);
    fn isaac_interfaces__msg__BatteryState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BatteryState>, out_seq: *mut rosidl_runtime_rs::Sequence<BatteryState>) -> bool;
}

// Corresponds to isaac_interfaces__msg__BatteryState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_charging: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_low: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_critical: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: rosidl_runtime_rs::String,

}



impl Default for BatteryState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__msg__BatteryState__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__msg__BatteryState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BatteryState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__BatteryState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__BatteryState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__BatteryState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BatteryState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BatteryState where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/msg/BatteryState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__msg__BatteryState() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__msg__MissionState() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__msg__MissionState__init(msg: *mut MissionState) -> bool;
    fn isaac_interfaces__msg__MissionState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionState>, size: usize) -> bool;
    fn isaac_interfaces__msg__MissionState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionState>);
    fn isaac_interfaces__msg__MissionState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionState>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionState>) -> bool;
}

// Corresponds to isaac_interfaces__msg__MissionState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub low_battery: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub critical_battery: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cargo_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cargo_capacity: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collected_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collection_goal: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_task: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_error: rosidl_runtime_rs::String,

}



impl Default for MissionState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__msg__MissionState__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__msg__MissionState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__MissionState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__MissionState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__MissionState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionState where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/msg/MissionState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__msg__MissionState() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__msg__PerceptionResult() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__msg__PerceptionResult__init(msg: *mut PerceptionResult) -> bool;
    fn isaac_interfaces__msg__PerceptionResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PerceptionResult>, size: usize) -> bool;
    fn isaac_interfaces__msg__PerceptionResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PerceptionResult>);
    fn isaac_interfaces__msg__PerceptionResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PerceptionResult>, out_seq: *mut rosidl_runtime_rs::Sequence<PerceptionResult>) -> bool;
}

// Corresponds to isaac_interfaces__msg__PerceptionResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PerceptionResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mineral_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacle_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacle_distance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub terrain_traversable: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub terrain_slope: f32,

}



impl Default for PerceptionResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__msg__PerceptionResult__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__msg__PerceptionResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PerceptionResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__PerceptionResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__PerceptionResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__PerceptionResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PerceptionResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PerceptionResult where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/msg/PerceptionResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__msg__PerceptionResult() }
  }
}


#[link(name = "isaac_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__msg__SelectedDriveAction() -> *const std::ffi::c_void;
}

#[link(name = "isaac_interfaces__rosidl_generator_c")]
extern "C" {
    fn isaac_interfaces__msg__SelectedDriveAction__init(msg: *mut SelectedDriveAction) -> bool;
    fn isaac_interfaces__msg__SelectedDriveAction__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SelectedDriveAction>, size: usize) -> bool;
    fn isaac_interfaces__msg__SelectedDriveAction__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SelectedDriveAction>);
    fn isaac_interfaces__msg__SelectedDriveAction__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SelectedDriveAction>, out_seq: *mut rosidl_runtime_rs::Sequence<SelectedDriveAction>) -> bool;
}

// Corresponds to isaac_interfaces__msg__SelectedDriveAction
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SelectedDriveAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: rosidl_runtime_rs::String,


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
    pub linear_velocity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,

}



impl Default for SelectedDriveAction {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !isaac_interfaces__msg__SelectedDriveAction__init(&mut msg as *mut _) {
        panic!("Call to isaac_interfaces__msg__SelectedDriveAction__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SelectedDriveAction {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__SelectedDriveAction__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__SelectedDriveAction__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { isaac_interfaces__msg__SelectedDriveAction__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SelectedDriveAction {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SelectedDriveAction where Self: Sized {
  const TYPE_NAME: &'static str = "isaac_interfaces/msg/SelectedDriveAction";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__isaac_interfaces__msg__SelectedDriveAction() }
  }
}


