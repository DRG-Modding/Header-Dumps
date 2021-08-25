// Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8_t {
	Double,
	Triple,
	Num,
	Invalid,
	EChaosBufferMode_MAX,
};

// Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t {
	DedicatedThread,
	TaskGraph,
	SingleThread,
	Num,
	Invalid,
	EChaosThreadingMode_MAX,
};

// Enum PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t {
	Fixed,
	Variable,
	VariableCapped,
	VariableCappedWithTarget,
	EChaosSolverTickMode_MAX,
};

