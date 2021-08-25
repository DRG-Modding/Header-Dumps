// Class InteractiveToolsFramework.InputBehavior
// Size: 0x30 (Inherited: 0x28)
struct UInputBehavior : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x80 (Inherited: 0x30)
struct UAnyButtonInputBehavior : UInputBehavior {
	char UnknownData_30[0x50]; // 0x30(0x50)
};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveGizmoBuilder : UObject {
};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.InteractiveGizmo
// Size: 0x38 (Inherited: 0x28)
struct UInteractiveGizmo : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UInputBehaviorSet* InputBehaviors; // 0x30(0x08)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0xf0 (Inherited: 0x38)
struct UAxisAngleGizmo : UInteractiveGizmo {
	char UnknownData_38[0x10]; // 0x38(0x10)
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> AngleSource; // 0x58(0x10)
	struct TScriptInterface<None> HitTarget; // 0x68(0x10)
	struct TScriptInterface<None> StateTarget; // 0x78(0x10)
	bool bInInteraction; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	struct FVector RotationOrigin; // 0x8c(0x0c)
	struct FVector RotationAxis; // 0x98(0x0c)
	struct FVector RotationPlaneX; // 0xa4(0x0c)
	struct FVector RotationPlaneY; // 0xb0(0x0c)
	struct FVector InteractionStartPoint; // 0xbc(0x0c)
	struct FVector InteractionCurPoint; // 0xc8(0x0c)
	float InteractionStartAngle; // 0xd4(0x04)
	float InteractionCurAngle; // 0xd8(0x04)
	char UnknownData_DC[0x14]; // 0xdc(0x14)
};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0xd8 (Inherited: 0x38)
struct UAxisPositionGizmo : UInteractiveGizmo {
	char UnknownData_38[0x10]; // 0x38(0x10)
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<None> HitTarget; // 0x68(0x10)
	struct TScriptInterface<None> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x01)
	bool bInInteraction; // 0x89(0x01)
	char UnknownData_8A[0x2]; // 0x8a(0x02)
	struct FVector InteractionOrigin; // 0x8c(0x0c)
	struct FVector InteractionAxis; // 0x98(0x0c)
	struct FVector InteractionStartPoint; // 0xa4(0x0c)
	struct FVector InteractionCurPoint; // 0xb0(0x0c)
	float InteractionStartParameter; // 0xbc(0x04)
	float InteractionCurParameter; // 0xc0(0x04)
	float ParameterSign; // 0xc4(0x04)
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoConstantAxisSource : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FVector Origin; // 0x30(0x0c)
	struct FVector Direction; // 0x3c(0x0c)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x60 (Inherited: 0x28)
struct UGizmoConstantFrameAxisSource : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FVector Origin; // 0x30(0x0c)
	struct FVector Direction; // 0x3c(0x0c)
	struct FVector TangentX; // 0x48(0x0c)
	struct FVector TangentY; // 0x54(0x0c)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoWorldAxisSource : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FVector Origin; // 0x30(0x0c)
	int32_t AxisIndex; // 0x3c(0x04)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoComponentAxisSource : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct USceneComponent* Component; // 0x30(0x08)
	int32_t AxisIndex; // 0x38(0x04)
	bool bLocalAxes; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0x50 (Inherited: 0x28)
struct UInteractiveToolPropertySet : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
	struct UObject* CachedProperties; // 0x40(0x08)
	bool bIsPropertySetEnabled; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0x68 (Inherited: 0x50)
struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; // 0x50(0x04)
	bool bSpecifyRadius; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	float BrushRadius; // 0x58(0x04)
	float BrushStrength; // 0x5c(0x04)
	float BrushFalloffAmount; // 0x60(0x04)
	bool bShowStrength; // 0x64(0x01)
	bool bShowFalloff; // 0x65(0x01)
	char UnknownData_66[0x2]; // 0x66(0x02)
};

// Class InteractiveToolsFramework.InteractiveTool
// Size: 0x80 (Inherited: 0x28)
struct UInteractiveTool : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
	struct UInputBehaviorSet* InputBehaviors; // 0x48(0x08)
	struct TArray<struct UObject*> ToolPropertyObjects; // 0x50(0x10)
	char UnknownData_60[0x20]; // 0x60(0x20)
};

// Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0x88 (Inherited: 0x80)
struct USingleSelectionTool : UInteractiveTool {
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0xc0 (Inherited: 0x88)
struct UMeshSurfacePointTool : USingleSelectionTool {
	char UnknownData_88[0x38]; // 0x88(0x38)
};

// Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x1b8 (Inherited: 0xc0)
struct UBaseBrushTool : UMeshSurfacePointTool {
	struct UBrushBaseProperties* BrushProperties; // 0xc0(0x08)
	bool bInBrushStroke; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	struct FBrushStampData LastBrushStamp; // 0xcc(0xa8)
	char UnknownData_174[0x14]; // 0x174(0x14)
	SoftClassProperty PropertyClass; // 0x188(0x28)
	struct UBrushStampIndicator* BrushStampIndicator; // 0x1b0(0x08)
};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size: 0x28 (Inherited: 0x28)
struct UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.BrushStampIndicator
// Size: 0xb0 (Inherited: 0x38)
struct UBrushStampIndicator : UInteractiveGizmo {
	float BrushRadius; // 0x38(0x04)
	float BrushFalloff; // 0x3c(0x04)
	struct FVector BrushPosition; // 0x40(0x0c)
	struct FVector BrushNormal; // 0x4c(0x0c)
	bool bDrawIndicatorLines; // 0x58(0x01)
	bool bDrawRadiusCircle; // 0x59(0x01)
	bool bDrawFalloffCircle; // 0x5a(0x01)
	char UnknownData_5B[0x1]; // 0x5b(0x01)
	int32_t SampleStepCount; // 0x5c(0x04)
	struct FLinearColor LineColor; // 0x60(0x10)
	float LineThickness; // 0x70(0x04)
	bool bDepthTested; // 0x74(0x01)
	bool bDrawSecondaryLines; // 0x75(0x01)
	char UnknownData_76[0x2]; // 0x76(0x02)
	float SecondaryLineThickness; // 0x78(0x04)
	struct FLinearColor SecondaryLineColor; // 0x7c(0x10)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct UPrimitiveComponent* AttachedComponent; // 0x90(0x08)
	char UnknownData_98[0x18]; // 0x98(0x18)
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x140 (Inherited: 0x80)
struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	char UnknownData_80[0xa0]; // 0x80(0xa0)
	bool bUpdateModifiersDuringDrag; // 0x120(0x01)
	char UnknownData_121[0x1f]; // 0x121(0x1f)
};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x280 (Inherited: 0x140)
struct ULocalClickDragInputBehavior : UClickDragInputBehavior {
	char UnknownData_140[0x140]; // 0x140(0x140)
};

// Class InteractiveToolsFramework.InteractiveToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveToolBuilder : UObject {
};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UClickDragToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.ClickDragTool
// Size: 0x88 (Inherited: 0x80)
struct UClickDragTool : UInteractiveTool {
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size: 0x220 (Inherited: 0x220)
struct AInternalToolFrameworkActor : AActor {
};

// Class InteractiveToolsFramework.GizmoActor
// Size: 0x220 (Inherited: 0x220)
struct AGizmoActor : AInternalToolFrameworkActor {
};

// Class InteractiveToolsFramework.GizmoBaseComponent
// Size: 0x410 (Inherited: 0x3f0)
struct UGizmoBaseComponent : UPrimitiveComponent {
	struct FLinearColor Color; // 0x3f0(0x10)
	float HoverSizeMultiplier; // 0x400(0x04)
	float PixelHitDistanceThreshold; // 0x404(0x04)
	char UnknownData_408[0x8]; // 0x408(0x08)

	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	void UpdateHoverState(bool bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x430 (Inherited: 0x410)
struct UGizmoArrowComponent : UGizmoBaseComponent {
	struct FVector Direction; // 0x410(0x0c)
	float Gap; // 0x41c(0x04)
	float Length; // 0x420(0x04)
	float Thickness; // 0x424(0x04)
	char UnknownData_428[0x8]; // 0x428(0x08)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x450 (Inherited: 0x410)
struct UGizmoBoxComponent : UGizmoBaseComponent {
	struct FVector Origin; // 0x410(0x0c)
	char UnknownData_41C[0x4]; // 0x41c(0x04)
	struct FQuat Rotation; // 0x420(0x10)
	struct FVector Dimensions; // 0x430(0x0c)
	float LineThickness; // 0x43c(0x04)
	bool bRemoveHiddenLines; // 0x440(0x01)
	bool bEnableAxisFlip; // 0x441(0x01)
	char UnknownData_442[0xe]; // 0x442(0x0e)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x430 (Inherited: 0x410)
struct UGizmoCircleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x410(0x0c)
	float Radius; // 0x41c(0x04)
	float Thickness; // 0x420(0x04)
	int32_t NumSides; // 0x424(0x04)
	bool bViewAligned; // 0x428(0x01)
	bool bOnlyAllowFrontFacingHits; // 0x429(0x01)
	char UnknownData_42A[0x6]; // 0x42a(0x06)
};

// Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoTransformSource : UInterface {

	void SetTransform(struct FTransform NewTransform); // Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	struct FTransform GetTransform(); // Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
};

// Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoAxisSource : UInterface {

	bool HasTangentVectors(); // Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	void GetTangentVectors(struct FVector TangentXOut, struct FVector TangentYOut); // Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	struct FVector GetOrigin(); // Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	struct FVector GetDirection(); // Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
};

// Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x28 (Inherited: 0x28)
struct UGizmoClickTarget : UInterface {

	void UpdateHoverState(bool bHovering); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
};

// Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x28 (Inherited: 0x28)
struct UGizmoStateTarget : UInterface {

	void EndUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	void BeginUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoFloatParameterSource : UInterface {

	void SetParameter(float NewValue); // Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	float GetParameter(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	void EndModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	void BeginModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoVec2ParameterSource : UInterface {

	void SetParameter(struct FVector2D NewValue); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	struct FVector2D GetParameter(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	void EndModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	void BeginModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x440 (Inherited: 0x410)
struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x410(0x0c)
	float HandleSize; // 0x41c(0x04)
	float Thickness; // 0x420(0x04)
	struct FVector Direction; // 0x424(0x0c)
	float Length; // 0x430(0x04)
	bool bImageScale; // 0x434(0x01)
	char UnknownData_435[0xb]; // 0x435(0x0b)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x440 (Inherited: 0x410)
struct UGizmoRectangleComponent : UGizmoBaseComponent {
	struct FVector DirectionX; // 0x410(0x0c)
	struct FVector DirectionY; // 0x41c(0x0c)
	float OffsetX; // 0x428(0x04)
	float OffsetY; // 0x42c(0x04)
	float LengthX; // 0x430(0x04)
	float LengthY; // 0x434(0x04)
	float Thickness; // 0x438(0x04)
	char SegmentFlags; // 0x43c(0x01)
	char UnknownData_43D[0x3]; // 0x43d(0x03)
};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0xb0 (Inherited: 0x28)
struct UGizmoLambdaHitTarget : UObject {
	char UnknownData_28[0x88]; // 0x28(0x88)
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x80 (Inherited: 0x28)
struct UGizmoComponentHitTarget : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UPrimitiveComponent* Component; // 0x30(0x08)
	char UnknownData_38[0x48]; // 0x38(0x48)
};

// Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x38 (Inherited: 0x28)
struct UInputBehaviorSet : UObject {
	struct TArray<struct FBehaviorInfo> Behaviors; // 0x28(0x10)
};

// Class InteractiveToolsFramework.InputBehaviorSource
// Size: 0x28 (Inherited: 0x28)
struct UInputBehaviorSource : UInterface {
};

// Class InteractiveToolsFramework.InputRouter
// Size: 0xb0 (Inherited: 0x28)
struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x28(0x01)
	bool bAutoInvalidateOnCapture; // 0x29(0x01)
	char UnknownData_2A[0xe]; // 0x2a(0x0e)
	struct UInputBehaviorSet* ActiveInputBehaviors; // 0x38(0x08)
	char UnknownData_40[0x70]; // 0x40(0x70)
};

// Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x30 (Inherited: 0x28)
struct UInteractionMechanic : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0xb8 (Inherited: 0x28)
struct UInteractiveGizmoManager : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x30(0x10)
	char UnknownData_40[0x18]; // 0x40(0x18)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58(0x50)
	char UnknownData_A8[0x10]; // 0xa8(0x10)
};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x28 (Inherited: 0x28)
struct UToolContextTransactionProvider : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x138 (Inherited: 0x28)
struct UInteractiveToolManager : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UInteractiveTool* ActiveLeftTool; // 0x30(0x08)
	struct UInteractiveTool* ActiveRightTool; // 0x38(0x08)
	char UnknownData_40[0x50]; // 0x40(0x50)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; // 0x90(0x50)
	char UnknownData_E0[0x58]; // 0xe0(0x58)
};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x28 (Inherited: 0x28)
struct UToolFrameworkComponent : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0x98 (Inherited: 0x28)
struct UInteractiveToolsContext : UObject {
	char UnknownData_28[0x30]; // 0x28(0x30)
	struct UInputRouter* InputRouter; // 0x58(0x08)
	struct UInteractiveToolManager* ToolManager; // 0x60(0x08)
	struct UInteractiveGizmoManager* GizmoManager; // 0x68(0x08)
	SoftClassProperty ToolManagerClass; // 0x70(0x28)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x238 (Inherited: 0x220)
struct AIntervalGizmoActor : AGizmoActor {
	struct UGizmoLineHandleComponent* UpIntervalComponent; // 0x220(0x08)
	struct UGizmoLineHandleComponent* DownIntervalComponent; // 0x228(0x08)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230(0x08)
};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0xc0 (Inherited: 0x28)
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder {
	char UnknownData_28[0x98]; // 0x28(0x98)
};

// Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x130 (Inherited: 0x38)
struct UIntervalGizmo : UInteractiveGizmo {
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x38(0x08)
	char UnknownData_40[0x10]; // 0x40(0x10)
	struct UTransformProxy* TransformProxy; // 0x50(0x08)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x58(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x68(0x10)
	char UnknownData_78[0x18]; // 0x78(0x18)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x90(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x98(0x08)
	char UnknownData_A0[0x90]; // 0xa0(0x90)
};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseFloatParameterSource : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<None> FloatParameterSource; // 0x48(0x10)
	float MinParameter; // 0x58(0x04)
	float MaxParameter; // 0x5c(0x04)
};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0x110 (Inherited: 0x30)
struct UKeyAsModifierInputBehavior : UInputBehavior {
	char UnknownData_30[0xe0]; // 0x30(0xe0)
};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UMeshSurfacePointToolBuilder : UInteractiveToolBuilder {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0x98 (Inherited: 0x30)
struct UMouseHoverBehavior : UInputBehavior {
	char UnknownData_30[0x68]; // 0x30(0x68)
};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior {
	char UnknownData_80[0xb0]; // 0x80(0xb0)
};

// Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0x90 (Inherited: 0x80)
struct UMultiSelectionTool : UInteractiveTool {
	char UnknownData_80[0x10]; // 0x80(0x10)
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseVec2ParameterSource : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	struct FVector2D Value; // 0x48(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0x50(0x10)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x110 (Inherited: 0x48)
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	char UnknownData_48[0x48]; // 0x48(0x48)
	struct TScriptInterface<None> AxisSource; // 0x90(0x10)
	struct TScriptInterface<None> TransformSource; // 0xa0(0x10)
	float Parameter; // 0xb0(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0xb4(0x08)
	struct FVector CurTranslationAxis; // 0xbc(0x0c)
	struct FVector CurTranslationOrigin; // 0xc8(0x0c)
	char UnknownData_D4[0xc]; // 0xd4(0x0c)
	struct FTransform InitialTransform; // 0xe0(0x30)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x130 (Inherited: 0x48)
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	char UnknownData_48[0x48]; // 0x48(0x48)
	struct TScriptInterface<None> AxisSource; // 0x90(0x10)
	struct TScriptInterface<None> TransformSource; // 0xa0(0x10)
	struct FVector2D Parameter; // 0xb0(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0xb8(0x10)
	struct FVector CurTranslationOrigin; // 0xc8(0x0c)
	struct FVector CurTranslationNormal; // 0xd4(0x0c)
	struct FVector CurTranslationAxisX; // 0xe0(0x0c)
	struct FVector CurTranslationAxisY; // 0xec(0x0c)
	char UnknownData_F8[0x8]; // 0xf8(0x08)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0xc0 (Inherited: 0x48)
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> TransformSource; // 0x58(0x10)
	float Angle; // 0x68(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x6c(0x08)
	struct FVector CurRotationAxis; // 0x74(0x0c)
	struct FVector CurRotationOrigin; // 0x80(0x0c)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct FTransform InitialTransform; // 0x90(0x30)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0xf0 (Inherited: 0x48)
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x04)
	struct FVector2D Parameter; // 0x6c(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0x74(0x10)
	struct FVector CurScaleOrigin; // 0x84(0x0c)
	struct FVector CurScaleNormal; // 0x90(0x0c)
	struct FVector CurScaleAxisX; // 0x9c(0x0c)
	struct FVector CurScaleAxisY; // 0xa8(0x0c)
	char UnknownData_B4[0xc]; // 0xb4(0x0c)
	struct FTransform InitialTransform; // 0xc0(0x30)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0xc0 (Inherited: 0x48)
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x04)
	float Parameter; // 0x6c(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x70(0x08)
	struct FVector CurScaleAxis; // 0x78(0x0c)
	struct FVector CurScaleOrigin; // 0x84(0x0c)
	struct FTransform InitialTransform; // 0x90(0x30)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x130 (Inherited: 0x48)
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	char UnknownData_48[0x48]; // 0x48(0x48)
	struct TScriptInterface<None> AxisSource; // 0x90(0x10)
	struct TScriptInterface<None> TransformSource; // 0xa0(0x10)
	float ScaleMultiplier; // 0xb0(0x04)
	struct FVector2D Parameter; // 0xb4(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0xbc(0x10)
	struct FVector CurScaleOrigin; // 0xcc(0x0c)
	struct FVector CurScaleNormal; // 0xd8(0x0c)
	struct FVector CurScaleAxisX; // 0xe4(0x0c)
	struct FVector CurScaleAxisY; // 0xf0(0x0c)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x100 (Inherited: 0x38)
struct UPlanePositionGizmo : UInteractiveGizmo {
	char UnknownData_38[0x10]; // 0x38(0x10)
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<None> HitTarget; // 0x68(0x10)
	struct TScriptInterface<None> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x01)
	bool bFlipX; // 0x89(0x01)
	bool bFlipY; // 0x8a(0x01)
	bool bInInteraction; // 0x8b(0x01)
	struct FVector InteractionOrigin; // 0x8c(0x0c)
	struct FVector InteractionNormal; // 0x98(0x0c)
	struct FVector InteractionAxisX; // 0xa4(0x0c)
	struct FVector InteractionAxisY; // 0xb0(0x0c)
	struct FVector InteractionStartPoint; // 0xbc(0x0c)
	struct FVector InteractionCurPoint; // 0xc8(0x0c)
	struct FVector2D InteractionStartParameter; // 0xd4(0x08)
	struct FVector2D InteractionCurParameter; // 0xdc(0x08)
	struct FVector2D ParameterSigns; // 0xe4(0x08)
	char UnknownData_EC[0x14]; // 0xec(0x14)
};

// Class InteractiveToolsFramework.SelectionSet
// Size: 0x40 (Inherited: 0x28)
struct USelectionSet : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x80 (Inherited: 0x40)
struct UMeshSelectionSet : USelectionSet {
	struct TArray<int32_t> Vertices; // 0x40(0x10)
	struct TArray<int32_t> Edges; // 0x50(0x10)
	struct TArray<int32_t> Faces; // 0x60(0x10)
	struct TArray<int32_t> Groups; // 0x70(0x10)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	char UnknownData_80[0x40]; // 0x80(0x40)
	bool HitTestOnRelease; // 0xc0(0x01)
	char UnknownData_C1[0x6f]; // 0xc1(0x6f)
};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct USingleClickToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.SingleClickTool
// Size: 0x88 (Inherited: 0x80)
struct USingleClickTool : UInteractiveTool {
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x30 (Inherited: 0x28)
struct UGizmoNilStateTarget : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0xb0 (Inherited: 0x28)
struct UGizmoLambdaStateTarget : UObject {
	char UnknownData_28[0x88]; // 0x28(0x88)
};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x58 (Inherited: 0x28)
struct UGizmoObjectModifyStateTarget : UObject {
	char UnknownData_28[0x30]; // 0x28(0x30)
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0xe0 (Inherited: 0x28)
struct UGizmoTransformChangeStateTarget : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
	struct TScriptInterface<None> TransactionManager; // 0x50(0x10)
	char UnknownData_60[0x80]; // 0x60(0x80)
};

// Class InteractiveToolsFramework.TransformGizmoActor
// Size: 0x2a0 (Inherited: 0x220)
struct ATransformGizmoActor : AGizmoActor {
	struct UPrimitiveComponent* TranslateX; // 0x220(0x08)
	struct UPrimitiveComponent* TranslateY; // 0x228(0x08)
	struct UPrimitiveComponent* TranslateZ; // 0x230(0x08)
	struct UPrimitiveComponent* TranslateYZ; // 0x238(0x08)
	struct UPrimitiveComponent* TranslateXZ; // 0x240(0x08)
	struct UPrimitiveComponent* TranslateXY; // 0x248(0x08)
	struct UPrimitiveComponent* RotateX; // 0x250(0x08)
	struct UPrimitiveComponent* RotateY; // 0x258(0x08)
	struct UPrimitiveComponent* RotateZ; // 0x260(0x08)
	struct UPrimitiveComponent* UniformScale; // 0x268(0x08)
	struct UPrimitiveComponent* AxisScaleX; // 0x270(0x08)
	struct UPrimitiveComponent* AxisScaleY; // 0x278(0x08)
	struct UPrimitiveComponent* AxisScaleZ; // 0x280(0x08)
	struct UPrimitiveComponent* PlaneScaleYZ; // 0x288(0x08)
	struct UPrimitiveComponent* PlaneScaleXZ; // 0x290(0x08)
	struct UPrimitiveComponent* PlaneScaleXY; // 0x298(0x08)
};

// Class InteractiveToolsFramework.TransformGizmoBuilder
// Size: 0xc0 (Inherited: 0x28)
struct UTransformGizmoBuilder : UInteractiveGizmoBuilder {
	char UnknownData_28[0x98]; // 0x28(0x98)
};

// Class InteractiveToolsFramework.TransformGizmo
// Size: 0x180 (Inherited: 0x38)
struct UTransformGizmo : UInteractiveGizmo {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct UTransformProxy* ActiveTarget; // 0x40(0x08)
	bool bSnapToWorldGrid; // 0x48(0x01)
	bool bUseContextCoordinateSystem; // 0x49(0x01)
	char UnknownData_4A[0x2]; // 0x4a(0x02)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x4c(0x04)
	char UnknownData_50[0x90]; // 0x50(0x90)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0xe0(0x10)
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents; // 0xf0(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x100(0x10)
	char UnknownData_110[0x10]; // 0x110(0x10)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x120(0x08)
	struct UGizmoComponentAxisSource* AxisXSource; // 0x128(0x08)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x130(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x138(0x08)
	struct UGizmoComponentAxisSource* UnitAxisXSource; // 0x140(0x08)
	struct UGizmoComponentAxisSource* UnitAxisYSource; // 0x148(0x08)
	struct UGizmoComponentAxisSource* UnitAxisZSource; // 0x150(0x08)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x158(0x08)
	struct UGizmoScaledTransformSource* ScaledTransformSource; // 0x160(0x08)
	char UnknownData_168[0x18]; // 0x168(0x18)
};

// Class InteractiveToolsFramework.TransformProxy
// Size: 0xf0 (Inherited: 0x28)
struct UTransformProxy : UObject {
	char UnknownData_28[0x48]; // 0x28(0x48)
	bool bRotatePerObject; // 0x70(0x01)
	bool bSetPivotMode; // 0x71(0x01)
	char UnknownData_72[0x1e]; // 0x72(0x1e)
	struct FTransform SharedTransform; // 0x90(0x30)
	struct FTransform InitialSharedTransform; // 0xc0(0x30)
};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseTransformSource : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	struct USceneComponent* Component; // 0x48(0x08)
	bool bModifyComponentOnTransform; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0xe0 (Inherited: 0x48)
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	struct TScriptInterface<None> ChildTransformSource; // 0x48(0x10)
	char UnknownData_58[0x88]; // 0x58(0x88)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x50 (Inherited: 0x48)
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	struct UTransformProxy* Proxy; // 0x48(0x08)
};

