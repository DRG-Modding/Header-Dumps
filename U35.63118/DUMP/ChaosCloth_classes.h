// Class ChaosCloth.ChaosClothConfig
// Size: 0x88 (Inherited: 0x28)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x28(0x01)
	float UniformMass; // 0x2c(0x04)
	float TotalMass; // 0x30(0x04)
	float Density; // 0x34(0x04)
	float MinPerParticleMass; // 0x38(0x04)
	float EdgeStiffness; // 0x3c(0x04)
	float BendingStiffness; // 0x40(0x04)
	float AreaStiffness; // 0x44(0x04)
	float VolumeStiffness; // 0x48(0x04)
	float StrainLimitingStiffness; // 0x4c(0x04)
	float LimitScale; // 0x50(0x04)
	bool bUseGeodesicDistance; // 0x54(0x01)
	float ShapeTargetStiffness; // 0x58(0x04)
	float CollisionThickness; // 0x5c(0x04)
	float FrictionCoefficient; // 0x60(0x04)
	float DampingCoefficient; // 0x64(0x04)
	float DragCoefficient; // 0x68(0x04)
	float AnimDriveSpringStiffness; // 0x6c(0x04)
	bool bUseBendingElements; // 0x70(0x01)
	bool bUseTetrahedralConstraints; // 0x71(0x01)
	bool bUseThinShellVolumeConstraints; // 0x72(0x01)
	bool bUseSelfCollisions; // 0x73(0x01)
	bool bUseContinuousCollisionDetection; // 0x74(0x01)
	FVector LinearVelocityScale; // 0x78(0x0c)
	float AngularVelocityScale; // 0x84(0x04)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x58 (Inherited: 0x28)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28(0x04)
	int32_t SubdivisionCount; // 0x2c(0x04)
	float SelfCollisionThickness; // 0x30(0x04)
	float CollisionThickness; // 0x34(0x04)
	bool bUseDampingOverride; // 0x38(0x01)
	float Damping; // 0x3c(0x04)
	bool bUseGravityOverride; // 0x40(0x01)
	float GravityScale; // 0x44(0x04)
	FVector Gravity; // 0x48(0x0c)
	bool bUseLocalSpaceSimulation; // 0x54(0x01)
	bool bUseXPBDConstraints; // 0x55(0x01)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0x40 (Inherited: 0x30)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
};

