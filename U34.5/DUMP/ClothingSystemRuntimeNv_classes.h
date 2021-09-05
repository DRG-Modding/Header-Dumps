// Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x140 (Inherited: 0x28)
struct UClothConfigNv : UClothConfigCommon {
	enum class EClothingWindMethodNv ClothingWindMethod; // 0x28(0x01)
	FClothConstraintSetupNv VerticalConstraint; // 0x2c(0x10)
	FClothConstraintSetupNv HorizontalConstraint; // 0x3c(0x10)
	FClothConstraintSetupNv BendConstraint; // 0x4c(0x10)
	FClothConstraintSetupNv ShearConstraint; // 0x5c(0x10)
	float SelfCollisionRadius; // 0x6c(0x04)
	float SelfCollisionStiffness; // 0x70(0x04)
	float SelfCollisionCullScale; // 0x74(0x04)
	FVector Damping; // 0x78(0x0c)
	float Friction; // 0x84(0x04)
	float WindDragCoefficient; // 0x88(0x04)
	float WindLiftCoefficient; // 0x8c(0x04)
	FVector LinearDrag; // 0x90(0x0c)
	FVector AngularDrag; // 0x9c(0x0c)
	FVector LinearInertiaScale; // 0xa8(0x0c)
	FVector AngularInertiaScale; // 0xb4(0x0c)
	FVector CentrifugalInertiaScale; // 0xc0(0x0c)
	float SolverFrequency; // 0xcc(0x04)
	float StiffnessFrequency; // 0xd0(0x04)
	float GravityScale; // 0xd4(0x04)
	FVector GravityOverride; // 0xd8(0x0c)
	bool bUseGravityOverride; // 0xe4(0x01)
	float TetherStiffness; // 0xe8(0x04)
	float TetherLimit; // 0xec(0x04)
	float CollisionThickness; // 0xf0(0x04)
	float AnimDriveSpringStiffness; // 0xf4(0x04)
	float AnimDriveDamperStiffness; // 0xf8(0x04)
	enum class EClothingWindMethod_Legacy WindMethod; // 0xfc(0x01)
	FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x100(0x10)
	FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x110(0x10)
	FClothConstraintSetup_Legacy BendConstraintConfig; // 0x120(0x10)
	FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x130(0x10)
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactoryNv : UClothingSimulationFactory {
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0x40 (Inherited: 0x30)
struct UClothingSimulationInteractorNv : UClothingSimulationInteractor {

	void SetAnimDriveDamperStiffness(float InStiffness);
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Size: 0x120 (Inherited: 0xe0)
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	TArray<float> MaxDistances; // 0xe0(0x10)
	TArray<float> BackstopDistances; // 0xf0(0x10)
	TArray<float> BackstopRadiuses; // 0x100(0x10)
	TArray<float> AnimDriveMultipliers; // 0x110(0x10)
};

