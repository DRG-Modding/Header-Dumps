// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8 {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4
};

// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8 {
	Transform = 0,
	Aim = 1,
	MAX = 2
};

// ScriptStruct AnimationCore.CCDIKChainLink
// Size: 0x80 (Inherited: 0x00)
struct FCCDIKChainLink {
};

// ScriptStruct AnimationCore.Axis
// Size: 0x10 (Inherited: 0x00)
struct FAxis {
	FVector Axis; // 0x00(0x0c)
	bool bInLocalSpace; // 0x0c(0x01)
};

// ScriptStruct AnimationCore.ConstraintData
// Size: 0x80 (Inherited: 0x00)
struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x00(0x10)
	float Weight; // 0x10(0x04)
	bool bMaintainOffset; // 0x14(0x01)
	FTransform Offset; // 0x20(0x30)
	FTransform CurrentTransform; // 0x50(0x30)
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDescriptor {
	enum class EConstraintType Type; // 0x00(0x01)
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x08(0x03)
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// Size: 0x03 (Inherited: 0x00)
struct FFilterOptionPerAxis {
	bool bX; // 0x00(0x01)
	bool bY; // 0x01(0x01)
	bool bZ; // 0x02(0x01)
};

// ScriptStruct AnimationCore.AimConstraintDescription
// Size: 0x40 (Inherited: 0x10)
struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10(0x10)
	FAxis LookUp_Axis; // 0x20(0x10)
	bool bUseLookUp; // 0x30(0x01)
	FVector LookUpTarget; // 0x34(0x0c)
};

// ScriptStruct AnimationCore.TransformConstraintDescription
// Size: 0x18 (Inherited: 0x10)
struct FTransformConstraintDescription : FConstraintDescriptionEx {
	enum class ETransformConstraintType TransformType; // 0x10(0x01)
};

// ScriptStruct AnimationCore.TransformConstraint
// Size: 0x28 (Inherited: 0x00)
struct FTransformConstraint {
	FConstraintDescription Operator; // 0x00(0x0d)
	FName SourceNode; // 0x10(0x08)
	FName TargetNode; // 0x18(0x08)
	float Weight; // 0x20(0x04)
	bool bMaintainOffset; // 0x24(0x01)
};

// ScriptStruct AnimationCore.ConstraintDescription
// Size: 0x0d (Inherited: 0x00)
struct FConstraintDescription {
	bool bTranslation; // 0x00(0x01)
	bool bRotation; // 0x01(0x01)
	bool bScale; // 0x02(0x01)
	bool bParent; // 0x03(0x01)
	FFilterOptionPerAxis TranslationAxes; // 0x04(0x03)
	FFilterOptionPerAxis RotationAxes; // 0x07(0x03)
	FFilterOptionPerAxis ScaleAxes; // 0x0a(0x03)
};

// ScriptStruct AnimationCore.ConstraintOffset
// Size: 0x60 (Inherited: 0x00)
struct FConstraintOffset {
	FVector Translation; // 0x00(0x0c)
	FQuat Rotation; // 0x10(0x10)
	FVector Scale; // 0x20(0x0c)
	FTransform Parent; // 0x30(0x30)
};

// ScriptStruct AnimationCore.TransformFilter
// Size: 0x09 (Inherited: 0x00)
struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x00(0x03)
	FFilterOptionPerAxis RotationFilter; // 0x03(0x03)
	FFilterOptionPerAxis ScaleFilter; // 0x06(0x03)
};

// ScriptStruct AnimationCore.EulerTransform
// Size: 0x24 (Inherited: 0x00)
struct FEulerTransform {
	FVector Location; // 0x00(0x0c)
	FRotator Rotation; // 0x0c(0x0c)
	FVector Scale; // 0x18(0x0c)
};

// ScriptStruct AnimationCore.FABRIKChainLink
// Size: 0x38 (Inherited: 0x00)
struct FFABRIKChainLink {
};

// ScriptStruct AnimationCore.NodeChain
// Size: 0x10 (Inherited: 0x00)
struct FNodeChain {
	TArray<FName> Nodes; // 0x00(0x10)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// Size: 0x78 (Inherited: 0x00)
struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x08(0x70)
};

// ScriptStruct AnimationCore.NodeHierarchyData
// Size: 0x70 (Inherited: 0x00)
struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x00(0x10)
	TArray<FTransform> Transforms; // 0x10(0x10)
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20(0x50)
};

// ScriptStruct AnimationCore.NodeObject
// Size: 0x10 (Inherited: 0x00)
struct FNodeObject {
	FName Name; // 0x00(0x08)
	FName ParentName; // 0x08(0x08)
};

// ScriptStruct AnimationCore.TransformNoScale
// Size: 0x20 (Inherited: 0x00)
struct FTransformNoScale {
	FVector Location; // 0x00(0x0c)
	FQuat Rotation; // 0x10(0x10)
};

