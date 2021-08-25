// Class FieldSystemEngine.FieldSystemActor
// Size: 0x228 (Inherited: 0x220)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x220(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x430 (Inherited: 0x3f0)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x3f0(0x08)
	char UnknownData_3F8[0x10]; // 0x3f8(0x10)
	struct TArray<struct TSoftObjectPtr<struct AChaosSolverActor>> SupportedSolvers; // 0x408(0x10)
	char UnknownData_418[0x18]; // 0x418(0x18)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	void ApplyPhysicsField(bool Enabled, char Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	void AddFieldCommand(bool Enabled, char Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	char ResolutionType; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(char ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
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
	char UnknownData_B4[0x4]; // 0xb4(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xd0 (Inherited: 0xb0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0(0x04)
	struct FVector Position; // 0xb4(0x0c)
	int32_t InteriorValue; // 0xc0(0x04)
	int32_t ExteriorValue; // 0xc4(0x04)
	char SetMaskCondition; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, char SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xd8 (Inherited: 0xb0)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Radius; // 0xc0(0x04)
	struct FVector Position; // 0xc4(0x0c)
	char Falloff; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, char Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xe0 (Inherited: 0xb0)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Distance; // 0xc0(0x04)
	struct FVector Position; // 0xc4(0x0c)
	struct FVector Normal; // 0xd0(0x0c)
	char Falloff; // 0xdc(0x01)
	char UnknownData_DD[0x3]; // 0xdd(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, char Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x100 (Inherited: 0xb0)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	struct FTransform Transform; // 0xc0(0x30)
	char Falloff; // 0xf0(0x01)
	char UnknownData_F1[0xf]; // 0xf1(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, char Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
};

// Class FieldSystemEngine.NoiseField
// Size: 0xf0 (Inherited: 0xb0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0(0x04)
	float MaxRange; // 0xb4(0x04)
	char UnknownData_B8[0x8]; // 0xb8(0x08)
	struct FTransform Transform; // 0xc0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField
};

// Class FieldSystemEngine.UniformVector
// Size: 0xc0 (Inherited: 0xb0)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	struct FVector Direction; // 0xb4(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector
};

// Class FieldSystemEngine.RadialVector
// Size: 0xc0 (Inherited: 0xb0)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	struct FVector Position; // 0xb4(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector
};

// Class FieldSystemEngine.RandomVector
// Size: 0xb8 (Inherited: 0xb0)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector
};

// Class FieldSystemEngine.OperatorField
// Size: 0xd0 (Inherited: 0xb0)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
	struct UFieldNodeBase* RightField; // 0xb8(0x08)
	struct UFieldNodeBase* LeftField; // 0xc0(0x08)
	char Operation; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, char Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xb8 (Inherited: 0xb0)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xb0(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xb8 (Inherited: 0xb0)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xb0(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField
};

// Class FieldSystemEngine.CullingField
// Size: 0xc8 (Inherited: 0xb0)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xb0(0x08)
	struct UFieldNodeBase* Field; // 0xb8(0x08)
	char Operation; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, char Operation); // Function FieldSystemEngine.CullingField.SetCullingField
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xb0 (Inherited: 0xb0)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
};

