// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosDebugDrawComponent : UActorComponent {
	char UnknownData_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosEventListenerComponent : UActorComponent {
	char UnknownData_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x270 (Inherited: 0xb8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char UnknownData_B8[0x110]; // 0xb8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218(0x50)
	char UnknownData_268[0x8]; // 0x268(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x2a8 (Inherited: 0x220)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x220(0x04)
	int32_t CollisionIterations; // 0x224(0x04)
	int32_t PushOutIterations; // 0x228(0x04)
	int32_t PushOutPairIterations; // 0x22c(0x04)
	float ClusterConnectionFactor; // 0x230(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x234(0x01)
	bool DoGenerateCollisionData; // 0x235(0x01)
	char UnknownData_236[0x2]; // 0x236(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x238(0x10)
	bool DoGenerateBreakingData; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x24c(0x10)
	bool DoGenerateTrailingData; // 0x25c(0x01)
	char UnknownData_25D[0x3]; // 0x25d(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x260(0x10)
	bool bHasFloor; // 0x270(0x01)
	char UnknownData_271[0x3]; // 0x271(0x03)
	float FloorHeight; // 0x274(0x04)
	float MassScale; // 0x278(0x04)
	bool bGenerateContactGraph; // 0x27c(0x01)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x27d(0x03)
	struct UBillboardComponent* SpriteComponent; // 0x280(0x08)
	char UnknownData_288[0x18]; // 0x288(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x2a0(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

