# rokey_isaac_sim

> **ROS2 + Isaac Sim 기반 화성 탐사 로버 자원 채취 시뮬레이션**

절차적으로 생성된 화성 지형에서 6륜 로버가 광물을 **인식 → 접근 → 수집 → 복귀(RTB)** 하는
미션을 자동으로 시뮬레이션하는 ROS2 워크스페이스입니다. (Isaac Sim 5.1 · ROS2 Humble · PPO)

---

## 📁 저장소 구조

```
rover_ws/
├── src/
│   └── a2_isaac/            # 핵심 ROS2 패키지 모음 (상세 문서: src/a2_isaac/README.md)
│       ├── isaac_bringup/        # 통합 launch (mvp, mvp_multi 등)
│       ├── isaac_sim/            # Isaac Sim 브리지 · 차량/지형 스폰 스크립트
│       ├── isaac_interfaces/     # msg/srv/action 정의
│       ├── isaac_drive/          # 주행 제어
│       ├── isaac_localization/   # 로컬라이제이션
│       ├── isaac_perception/     # 광물 인식 (perception)
│       ├── isaac_manipulation/   # 매니퓰레이터(팔) 제어
│       ├── isaac_rl/             # 강화학습(PPO) 학습·정책
│       └── isaac_supervisor/     # 미션 관리 · 배터리 모니터
├── build/   install/   log/      # colcon 빌드 산출물
└── README.md
```

> 상세 환경 설정, 시연 명령어, 팀 협업 규칙(ROS_DOMAIN_ID 등)은
> **[`src/a2_isaac/README.md`](src/a2_isaac/README.md)** 를 참고하세요.

---

## 🚀 빠른 시작

### 1. 빌드
```bash
cd ~/dev_ws/rover_ws
colcon build --symlink-install
source install/setup.bash
```

### 2. 실행 (멀티 로버 시연)

**T1 — Isaac Sim (로버 스폰)**
```bash
cd ~/dev_ws/rover_ws/src/a2_isaac
tools/isaac-pypi isaac_sim/scripts/run_vehicle_v3.py \
    --terrain terrain_00026 --rovers rover_1 rover_2
```

**T2 — 미션 스택 (협조 + Web HUD)**
```bash
source /opt/ros/humble/setup.bash
source ~/dev_ws/rover_ws/install/setup.bash
cd ~/dev_ws/rover_ws
ros2 launch isaac_bringup mvp_multi.launch.py
```

**T3 — 브라우저 HUD**
```bash
xdg-open http://localhost:8088
```

종료: T2에서 `Ctrl+C` → 전체 미션 스택 + Web HUD 정리.

---

## 🧩 주요 인터페이스 (`isaac_interfaces`)

| 종류 | 정의 |
|:---|:---|
| msg | `BatteryState`, `Detection`, `DetectionArray`, `MissionState`, `SelectedDriveAction` |
| action | `ExecuteArmTask` |

---

## 🛠 환경

- Ubuntu 22.04 · ROS2 Humble
- NVIDIA Isaac Sim 5.1 (PyPI binary)
- Python 3.10

자세한 환경 셋업은 [`src/a2_isaac/docs/`](src/a2_isaac/docs/) 문서를 참고하세요.
