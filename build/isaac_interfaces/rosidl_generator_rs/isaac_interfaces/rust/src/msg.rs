#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to isaac_interfaces__msg__BatteryState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub source: std::string::String,

}



impl Default for BatteryState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryState::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryState {
  type RmwMsg = super::msg::rmw::BatteryState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        percentage: msg.percentage,
        is_charging: msg.is_charging,
        is_low: msg.is_low,
        is_critical: msg.is_critical,
        voltage: msg.voltage,
        current: msg.current,
        source: msg.source.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      percentage: msg.percentage,
      is_charging: msg.is_charging,
      is_low: msg.is_low,
      is_critical: msg.is_critical,
      voltage: msg.voltage,
      current: msg.current,
        source: msg.source.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      percentage: msg.percentage,
      is_charging: msg.is_charging,
      is_low: msg.is_low,
      is_critical: msg.is_critical,
      voltage: msg.voltage,
      current: msg.current,
      source: msg.source.to_string(),
    }
  }
}


// Corresponds to isaac_interfaces__msg__MissionState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous_state: std::string::String,


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
    pub active_task: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_error: std::string::String,

}



impl Default for MissionState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionState::default())
  }
}

impl rosidl_runtime_rs::Message for MissionState {
  type RmwMsg = super::msg::rmw::MissionState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
        previous_state: msg.previous_state.as_str().into(),
        battery_percent: msg.battery_percent,
        low_battery: msg.low_battery,
        critical_battery: msg.critical_battery,
        cargo_count: msg.cargo_count,
        cargo_capacity: msg.cargo_capacity,
        collected_count: msg.collected_count,
        collection_goal: msg.collection_goal,
        active_task: msg.active_task.as_str().into(),
        last_error: msg.last_error.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
        previous_state: msg.previous_state.as_str().into(),
      battery_percent: msg.battery_percent,
      low_battery: msg.low_battery,
      critical_battery: msg.critical_battery,
      cargo_count: msg.cargo_count,
      cargo_capacity: msg.cargo_capacity,
      collected_count: msg.collected_count,
      collection_goal: msg.collection_goal,
        active_task: msg.active_task.as_str().into(),
        last_error: msg.last_error.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state.to_string(),
      previous_state: msg.previous_state.to_string(),
      battery_percent: msg.battery_percent,
      low_battery: msg.low_battery,
      critical_battery: msg.critical_battery,
      cargo_count: msg.cargo_count,
      cargo_capacity: msg.cargo_capacity,
      collected_count: msg.collected_count,
      collection_goal: msg.collection_goal,
      active_task: msg.active_task.to_string(),
      last_error: msg.last_error.to_string(),
    }
  }
}


// Corresponds to isaac_interfaces__msg__PerceptionResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PerceptionResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mineral_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_type: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PerceptionResult::default())
  }
}

impl rosidl_runtime_rs::Message for PerceptionResult {
  type RmwMsg = super::msg::rmw::PerceptionResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mineral_detected: msg.mineral_detected,
        object_id: msg.object_id.as_str().into(),
        object_type: msg.object_type.as_str().into(),
        confidence: msg.confidence,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        obstacle_detected: msg.obstacle_detected,
        obstacle_distance: msg.obstacle_distance,
        terrain_traversable: msg.terrain_traversable,
        terrain_slope: msg.terrain_slope,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mineral_detected: msg.mineral_detected,
        object_id: msg.object_id.as_str().into(),
        object_type: msg.object_type.as_str().into(),
      confidence: msg.confidence,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      obstacle_detected: msg.obstacle_detected,
      obstacle_distance: msg.obstacle_distance,
      terrain_traversable: msg.terrain_traversable,
      terrain_slope: msg.terrain_slope,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mineral_detected: msg.mineral_detected,
      object_id: msg.object_id.to_string(),
      object_type: msg.object_type.to_string(),
      confidence: msg.confidence,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      obstacle_detected: msg.obstacle_detected,
      obstacle_distance: msg.obstacle_distance,
      terrain_traversable: msg.terrain_traversable,
      terrain_slope: msg.terrain_slope,
    }
  }
}


// Corresponds to isaac_interfaces__msg__SelectedDriveAction

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SelectedDriveAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: std::string::String,


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
    pub reason: std::string::String,

}



impl Default for SelectedDriveAction {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SelectedDriveAction::default())
  }
}

impl rosidl_runtime_rs::Message for SelectedDriveAction {
  type RmwMsg = super::msg::rmw::SelectedDriveAction;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: msg.action.as_str().into(),
        target_x: msg.target_x,
        target_y: msg.target_y,
        target_yaw: msg.target_yaw,
        linear_velocity: msg.linear_velocity,
        angular_velocity: msg.angular_velocity,
        confidence: msg.confidence,
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: msg.action.as_str().into(),
      target_x: msg.target_x,
      target_y: msg.target_y,
      target_yaw: msg.target_yaw,
      linear_velocity: msg.linear_velocity,
      angular_velocity: msg.angular_velocity,
      confidence: msg.confidence,
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      action: msg.action.to_string(),
      target_x: msg.target_x,
      target_y: msg.target_y,
      target_yaw: msg.target_yaw,
      linear_velocity: msg.linear_velocity,
      angular_velocity: msg.angular_velocity,
      confidence: msg.confidence,
      reason: msg.reason.to_string(),
    }
  }
}


