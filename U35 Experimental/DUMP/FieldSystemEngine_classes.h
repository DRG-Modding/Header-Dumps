// Class FieldSystemEngine.FieldSystemActor
// Size: 0x228 (Inherited: 0x220)
struct AFieldSystemActor : AActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x220(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x430 (Inherited: 0x3f0)
struct UFieldSystemComponent : UPrimitiveComponent {
	UFieldSystem* FieldSystem; // 0x3f0(0x08)
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x408(0x10)

	void ResetFieldSystem();
	void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);
	void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t Iterations);
	void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);
	void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
	void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0(0x04)

	UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xb0(0x01)

	UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType);
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0(0x04)

	UUniformInteger* SetUniformInteger(int32_t Magnitude);
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xd0 (Inherited: 0xb0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0(0x04)
	FVector Position; // 0xb4(0x0c)
	int32_t InteriorValue; // 0xc0(0x04)
	int32_t ExteriorValue; // 0xc4(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xc8(0x01)

	URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn);
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)

	UUniformScalar* SetUniformScalar(float Magnitude);
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xd8 (Inherited: 0xb0)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Radius; // 0xc0(0x04)
	FVector Position; // 0xc4(0x0c)
	enum class EFieldFalloffType Falloff; // 0xd0(0x01)

	URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, enum class EFieldFalloffType Falloff);
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xe0 (Inherited: 0xb0)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Distance; // 0xc0(0x04)
	FVector Position; // 0xc4(0x0c)
	FVector Normal; // 0xd0(0x0c)
	enum class EFieldFalloffType Falloff; // 0xdc(0x01)

	UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, enum class EFieldFalloffType Falloff);
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x100 (Inherited: 0xb0)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	FTransform Transform; // 0xc0(0x30)
	enum class EFieldFalloffType Falloff; // 0xf0(0x01)

	UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, enum class EFieldFalloffType Falloff);
};

// Class FieldSystemEngine.NoiseField
// Size: 0xf0 (Inherited: 0xb0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0(0x04)
	float MaxRange; // 0xb4(0x04)
	FTransform Transform; // 0xc0(0x30)

	UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);
};

// Class FieldSystemEngine.UniformVector
// Size: 0xc0 (Inherited: 0xb0)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	FVector Direction; // 0xb4(0x0c)

	UUniformVector* SetUniformVector(float Magnitude, FVector Direction);
};

// Class FieldSystemEngine.RadialVector
// Size: 0xc0 (Inherited: 0xb0)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	FVector Position; // 0xb4(0x0c)

	URadialVector* SetRadialVector(float Magnitude, FVector Position);
};

// Class FieldSystemEngine.RandomVector
// Size: 0xb8 (Inherited: 0xb0)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)

	URandomVector* SetRandomVector(float Magnitude);
};

// Class FieldSystemEngine.OperatorField
// Size: 0xd0 (Inherited: 0xb0)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0(0x04)
	UFieldNodeBase* RightField; // 0xb8(0x08)
	UFieldNodeBase* LeftField; // 0xc0(0x08)
	enum class EFieldOperationType Operation; // 0xc8(0x01)

	UOperatorField* SetOperatorField(float Magnitude, UFieldNodeBase* RightField, UFieldNodeBase* LeftField, enum class EFieldOperationType Operation);
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xb8 (Inherited: 0xb0)
struct UToIntegerField : UFieldNodeInt {
	UFieldNodeFloat* FloatField; // 0xb0(0x08)

	UToIntegerField* SetToIntegerField(UFieldNodeFloat* FloatField);
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xb8 (Inherited: 0xb0)
struct UToFloatField : UFieldNodeFloat {
	UFieldNodeInt* IntField; // 0xb0(0x08)

	UToFloatField* SetToFloatField(UFieldNodeInt* IntegerField);
};

// Class FieldSystemEngine.CullingField
// Size: 0xc8 (Inherited: 0xb0)
struct UCullingField : UFieldNodeBase {
	UFieldNodeBase* Culling; // 0xb0(0x08)
	UFieldNodeBase* Field; // 0xb8(0x08)
	enum class EFieldCullingOperationType Operation; // 0xc0(0x01)

	UCullingField* SetCullingField(UFieldNodeBase* Culling, UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation);
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xb0 (Inherited: 0xb0)
struct UReturnResultsTerminal : UFieldNodeBase {

	UReturnResultsTerminal* SetReturnResultsTerminal();
};

