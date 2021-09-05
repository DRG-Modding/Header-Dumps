// Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8 {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4
};

// Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8 {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5
};

// Enum PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8 {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4
};

