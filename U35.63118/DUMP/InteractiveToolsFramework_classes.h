// Class InteractiveToolsFramework.InputBehavior
// Size: 0x30 (Inherited: 0x28)
struct UInputBehavior : UObject {
};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x80 (Inherited: 0x30)
struct UAnyButtonInputBehavior : UInputBehavior {
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
	UInputBehaviorSet* InputBehaviors; // 0x30(0x08)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0xf0 (Inherited: 0x38)
struct UAxisAngleGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x58(0x10)
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bInInteraction; // 0x88(0x01)
	FVector RotationOrigin; // 0x8c(0x0c)
	FVector RotationAxis; // 0x98(0x0c)
	FVector RotationPlaneX; // 0xa4(0x0c)
	FVector RotationPlaneY; // 0xb0(0x0c)
	FVector InteractionStartPoint; // 0xbc(0x0c)
	FVector InteractionCurPoint; // 0xc8(0x0c)
	float InteractionStartAngle; // 0xd4(0x04)
	float InteractionCurAngle; // 0xd8(0x04)
};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0xd8 (Inherited: 0x38)
struct UAxisPositionGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x58(0x10)
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x01)
	bool bInInteraction; // 0x89(0x01)
	FVector InteractionOrigin; // 0x8c(0x0c)
	FVector InteractionAxis; // 0x98(0x0c)
	FVector InteractionStartPoint; // 0xa4(0x0c)
	FVector InteractionCurPoint; // 0xb0(0x0c)
	float InteractionStartParameter; // 0xbc(0x04)
	float InteractionCurParameter; // 0xc0(0x04)
	float ParameterSign; // 0xc4(0x04)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoConstantAxisSource : UObject {
	FVector Origin; // 0x30(0x0c)
	FVector Direction; // 0x3c(0x0c)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x60 (Inherited: 0x28)
struct UGizmoConstantFrameAxisSource : UObject {
	FVector Origin; // 0x30(0x0c)
	FVector Direction; // 0x3c(0x0c)
	FVector TangentX; // 0x48(0x0c)
	FVector TangentY; // 0x54(0x0c)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoWorldAxisSource : UObject {
	FVector Origin; // 0x30(0x0c)
	int32_t AxisIndex; // 0x3c(0x04)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoComponentAxisSource : UObject {
	USceneComponent* Component; // 0x30(0x08)
	int32_t AxisIndex; // 0x38(0x04)
	bool bLocalAxes; // 0x3c(0x01)
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0x50 (Inherited: 0x28)
struct UInteractiveToolPropertySet : UObject {
	UObject* CachedProperties; // 0x40(0x08)
	bool bIsPropertySetEnabled; // 0x48(0x01)
};

// Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0x68 (Inherited: 0x50)
struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; // 0x50(0x04)
	bool bSpecifyRadius; // 0x54(0x01)
	float BrushRadius; // 0x58(0x04)
	float BrushStrength; // 0x5c(0x04)
	float BrushFalloffAmount; // 0x60(0x04)
	bool bShowStrength; // 0x64(0x01)
	bool bShowFalloff; // 0x65(0x01)
};

// Class InteractiveToolsFramework.InteractiveTool
// Size: 0x80 (Inherited: 0x28)
struct UInteractiveTool : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x48(0x08)
	TArray<UObject*> ToolPropertyObjects; // 0x50(0x10)
};

// Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0x88 (Inherited: 0x80)
struct USingleSelectionTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0xc0 (Inherited: 0x88)
struct UMeshSurfacePointTool : USingleSelectionTool {
};

// Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x1b8 (Inherited: 0xc0)
struct UBaseBrushTool : UMeshSurfacePointTool {
	UBrushBaseProperties* BrushProperties; // 0xc0(0x08)
	bool bInBrushStroke; // 0xc8(0x01)
	FBrushStampData LastBrushStamp; // 0xcc(0xa8)
	TSoftClassPtr<UObject> PropertyClass; // 0x188(0x28)
	UBrushStampIndicator* BrushStampIndicator; // 0x1b0(0x08)
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
	FVector BrushPosition; // 0x40(0x0c)
	FVector BrushNormal; // 0x4c(0x0c)
	bool bDrawIndicatorLines; // 0x58(0x01)
	bool bDrawRadiusCircle; // 0x59(0x01)
	bool bDrawFalloffCircle; // 0x5a(0x01)
	int32_t SampleStepCount; // 0x5c(0x04)
	FLinearColor LineColor; // 0x60(0x10)
	float LineThickness; // 0x70(0x04)
	bool bDepthTested; // 0x74(0x01)
	bool bDrawSecondaryLines; // 0x75(0x01)
	float SecondaryLineThickness; // 0x78(0x04)
	FLinearColor SecondaryLineColor; // 0x7c(0x10)
	UPrimitiveComponent* AttachedComponent; // 0x90(0x08)
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x140 (Inherited: 0x80)
struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120(0x01)
};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x280 (Inherited: 0x140)
struct ULocalClickDragInputBehavior : UClickDragInputBehavior {
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
	FLinearColor Color; // 0x3f0(0x10)
	float HoverSizeMultiplier; // 0x400(0x04)
	float PixelHitDistanceThreshold; // 0x404(0x04)

	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x430 (Inherited: 0x410)
struct UGizmoArrowComponent : UGizmoBaseComponent {
	FVector Direction; // 0x410(0x0c)
	float Gap; // 0x41c(0x04)
	float Length; // 0x420(0x04)
	float Thickness; // 0x424(0x04)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x450 (Inherited: 0x410)
struct UGizmoBoxComponent : UGizmoBaseComponent {
	FVector Origin; // 0x410(0x0c)
	FQuat Rotation; // 0x420(0x10)
	FVector Dimensions; // 0x430(0x0c)
	float LineThickness; // 0x43c(0x04)
	bool bRemoveHiddenLines; // 0x440(0x01)
	bool bEnableAxisFlip; // 0x441(0x01)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x430 (Inherited: 0x410)
struct UGizmoCircleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x410(0x0c)
	float Radius; // 0x41c(0x04)
	float Thickness; // 0x420(0x04)
	int32_t NumSides; // 0x424(0x04)
	bool bViewAligned; // 0x428(0x01)
	bool bOnlyAllowFrontFacingHits; // 0x429(0x01)
};

// Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoTransformSource : UInterface {

	void SetTransform(FTransform NewTransform);
	FTransform GetTransform();
};

// Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoAxisSource : UInterface {

	bool HasTangentVectors();
	void GetTangentVectors(FVector TangentXOut, FVector TangentYOut);
	FVector GetOrigin();
	FVector GetDirection();
};

// Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x28 (Inherited: 0x28)
struct UGizmoClickTarget : UInterface {

	void UpdateHoverState(bool bHovering);
};

// Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x28 (Inherited: 0x28)
struct UGizmoStateTarget : UInterface {

	void EndUpdate();
	void BeginUpdate();
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoFloatParameterSource : UInterface {

	void SetParameter(float NewValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoVec2ParameterSource : UInterface {

	void SetParameter(FVector2D NewValue);
	FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x440 (Inherited: 0x410)
struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x410(0x0c)
	float HandleSize; // 0x41c(0x04)
	float Thickness; // 0x420(0x04)
	FVector Direction; // 0x424(0x0c)
	float Length; // 0x430(0x04)
	bool bImageScale; // 0x434(0x01)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x440 (Inherited: 0x410)
struct UGizmoRectangleComponent : UGizmoBaseComponent {
	FVector DirectionX; // 0x410(0x0c)
	FVector DirectionY; // 0x41c(0x0c)
	float OffsetX; // 0x428(0x04)
	float OffsetY; // 0x42c(0x04)
	float LengthX; // 0x430(0x04)
	float LengthY; // 0x434(0x04)
	float Thickness; // 0x438(0x04)
	char SegmentFlags; // 0x43c(0x01)
};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0xb0 (Inherited: 0x28)
struct UGizmoLambdaHitTarget : UObject {
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x80 (Inherited: 0x28)
struct UGizmoComponentHitTarget : UObject {
	UPrimitiveComponent* Component; // 0x30(0x08)
};

// Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x38 (Inherited: 0x28)
struct UInputBehaviorSet : UObject {
	TArray<FBehaviorInfo> Behaviors; // 0x28(0x10)
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
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38(0x08)
};

// Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x30 (Inherited: 0x28)
struct UInteractionMechanic : UObject {
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0xb8 (Inherited: 0x28)
struct UInteractiveGizmoManager : UObject {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30(0x10)
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58(0x50)
};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x28 (Inherited: 0x28)
struct UToolContextTransactionProvider : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x138 (Inherited: 0x28)
struct UInteractiveToolManager : UObject {
	UInteractiveTool* ActiveLeftTool; // 0x30(0x08)
	UInteractiveTool* ActiveRightTool; // 0x38(0x08)
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90(0x50)
};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x28 (Inherited: 0x28)
struct UToolFrameworkComponent : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0x98 (Inherited: 0x28)
struct UInteractiveToolsContext : UObject {
	UInputRouter* InputRouter; // 0x58(0x08)
	UInteractiveToolManager* ToolManager; // 0x60(0x08)
	UInteractiveGizmoManager* GizmoManager; // 0x68(0x08)
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70(0x28)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x238 (Inherited: 0x220)
struct AIntervalGizmoActor : AGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x220(0x08)
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x228(0x08)
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230(0x08)
};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0xc0 (Inherited: 0x28)
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x130 (Inherited: 0x38)
struct UIntervalGizmo : UInteractiveGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38(0x08)
	UTransformProxy* TransformProxy; // 0x50(0x08)
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58(0x10)
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68(0x10)
	UGizmoComponentAxisSource* AxisYSource; // 0x90(0x08)
	UGizmoComponentAxisSource* AxisZSource; // 0x98(0x08)
};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseFloatParameterSource : UObject {
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48(0x10)
	float MinParameter; // 0x58(0x04)
	float MaxParameter; // 0x5c(0x04)
};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0x110 (Inherited: 0x30)
struct UKeyAsModifierInputBehavior : UInputBehavior {
};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UMeshSurfacePointToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0x98 (Inherited: 0x30)
struct UMouseHoverBehavior : UInputBehavior {
};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior {
};

// Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0x90 (Inherited: 0x80)
struct UMultiSelectionTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48(0x04)
	FGizmoFloatParameterChange LastChange; // 0x4c(0x08)
};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseVec2ParameterSource : UObject {
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	FVector2D Value; // 0x48(0x08)
	FGizmoVec2ParameterChange LastChange; // 0x50(0x10)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x110 (Inherited: 0x48)
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	float Parameter; // 0xb0(0x04)
	FGizmoFloatParameterChange LastChange; // 0xb4(0x08)
	FVector CurTranslationAxis; // 0xbc(0x0c)
	FVector CurTranslationOrigin; // 0xc8(0x0c)
	FTransform InitialTransform; // 0xe0(0x30)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x130 (Inherited: 0x48)
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	FVector2D Parameter; // 0xb0(0x08)
	FGizmoVec2ParameterChange LastChange; // 0xb8(0x10)
	FVector CurTranslationOrigin; // 0xc8(0x0c)
	FVector CurTranslationNormal; // 0xd4(0x0c)
	FVector CurTranslationAxisX; // 0xe0(0x0c)
	FVector CurTranslationAxisY; // 0xec(0x0c)
	FTransform InitialTransform; // 0x100(0x30)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0xc0 (Inherited: 0x48)
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float Angle; // 0x68(0x04)
	FGizmoFloatParameterChange LastChange; // 0x6c(0x08)
	FVector CurRotationAxis; // 0x74(0x0c)
	FVector CurRotationOrigin; // 0x80(0x0c)
	FTransform InitialTransform; // 0x90(0x30)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0xf0 (Inherited: 0x48)
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x04)
	FVector2D Parameter; // 0x6c(0x08)
	FGizmoVec2ParameterChange LastChange; // 0x74(0x10)
	FVector CurScaleOrigin; // 0x84(0x0c)
	FVector CurScaleNormal; // 0x90(0x0c)
	FVector CurScaleAxisX; // 0x9c(0x0c)
	FVector CurScaleAxisY; // 0xa8(0x0c)
	FTransform InitialTransform; // 0xc0(0x30)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0xc0 (Inherited: 0x48)
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x04)
	float Parameter; // 0x6c(0x04)
	FGizmoFloatParameterChange LastChange; // 0x70(0x08)
	FVector CurScaleAxis; // 0x78(0x0c)
	FVector CurScaleOrigin; // 0x84(0x0c)
	FTransform InitialTransform; // 0x90(0x30)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x130 (Inherited: 0x48)
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	float ScaleMultiplier; // 0xb0(0x04)
	FVector2D Parameter; // 0xb4(0x08)
	FGizmoVec2ParameterChange LastChange; // 0xbc(0x10)
	FVector CurScaleOrigin; // 0xcc(0x0c)
	FVector CurScaleNormal; // 0xd8(0x0c)
	FVector CurScaleAxisX; // 0xe4(0x0c)
	FVector CurScaleAxisY; // 0xf0(0x0c)
	FTransform InitialTransform; // 0x100(0x30)
};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x100 (Inherited: 0x38)
struct UPlanePositionGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x58(0x10)
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x01)
	bool bFlipX; // 0x89(0x01)
	bool bFlipY; // 0x8a(0x01)
	bool bInInteraction; // 0x8b(0x01)
	FVector InteractionOrigin; // 0x8c(0x0c)
	FVector InteractionNormal; // 0x98(0x0c)
	FVector InteractionAxisX; // 0xa4(0x0c)
	FVector InteractionAxisY; // 0xb0(0x0c)
	FVector InteractionStartPoint; // 0xbc(0x0c)
	FVector InteractionCurPoint; // 0xc8(0x0c)
	FVector2D InteractionStartParameter; // 0xd4(0x08)
	FVector2D InteractionCurParameter; // 0xdc(0x08)
	FVector2D ParameterSigns; // 0xe4(0x08)
};

// Class InteractiveToolsFramework.SelectionSet
// Size: 0x40 (Inherited: 0x28)
struct USelectionSet : UObject {
};

// Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x80 (Inherited: 0x40)
struct UMeshSelectionSet : USelectionSet {
	TArray<int32_t> Vertices; // 0x40(0x10)
	TArray<int32_t> Edges; // 0x50(0x10)
	TArray<int32_t> Faces; // 0x60(0x10)
	TArray<int32_t> Groups; // 0x70(0x10)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	bool HitTestOnRelease; // 0xc0(0x01)
};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct USingleClickToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.SingleClickTool
// Size: 0x88 (Inherited: 0x80)
struct USingleClickTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x30 (Inherited: 0x28)
struct UGizmoNilStateTarget : UObject {
};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0xb0 (Inherited: 0x28)
struct UGizmoLambdaStateTarget : UObject {
};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x58 (Inherited: 0x28)
struct UGizmoObjectModifyStateTarget : UObject {
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0xe0 (Inherited: 0x28)
struct UGizmoTransformChangeStateTarget : UObject {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50(0x10)
};

// Class InteractiveToolsFramework.TransformGizmoActor
// Size: 0x2a0 (Inherited: 0x220)
struct ATransformGizmoActor : AGizmoActor {
	UPrimitiveComponent* TranslateX; // 0x220(0x08)
	UPrimitiveComponent* TranslateY; // 0x228(0x08)
	UPrimitiveComponent* TranslateZ; // 0x230(0x08)
	UPrimitiveComponent* TranslateYZ; // 0x238(0x08)
	UPrimitiveComponent* TranslateXZ; // 0x240(0x08)
	UPrimitiveComponent* TranslateXY; // 0x248(0x08)
	UPrimitiveComponent* RotateX; // 0x250(0x08)
	UPrimitiveComponent* RotateY; // 0x258(0x08)
	UPrimitiveComponent* RotateZ; // 0x260(0x08)
	UPrimitiveComponent* UniformScale; // 0x268(0x08)
	UPrimitiveComponent* AxisScaleX; // 0x270(0x08)
	UPrimitiveComponent* AxisScaleY; // 0x278(0x08)
	UPrimitiveComponent* AxisScaleZ; // 0x280(0x08)
	UPrimitiveComponent* PlaneScaleYZ; // 0x288(0x08)
	UPrimitiveComponent* PlaneScaleXZ; // 0x290(0x08)
	UPrimitiveComponent* PlaneScaleXY; // 0x298(0x08)
};

// Class InteractiveToolsFramework.TransformGizmoBuilder
// Size: 0xc0 (Inherited: 0x28)
struct UTransformGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.TransformGizmo
// Size: 0x180 (Inherited: 0x38)
struct UTransformGizmo : UInteractiveGizmo {
	UTransformProxy* ActiveTarget; // 0x40(0x08)
	bool bSnapToWorldGrid; // 0x48(0x01)
	bool bUseContextCoordinateSystem; // 0x49(0x01)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x4c(0x04)
	TArray<UPrimitiveComponent*> ActiveComponents; // 0xe0(0x10)
	TArray<UPrimitiveComponent*> NonuniformScaleComponents; // 0xf0(0x10)
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x100(0x10)
	UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x120(0x08)
	UGizmoComponentAxisSource* AxisXSource; // 0x128(0x08)
	UGizmoComponentAxisSource* AxisYSource; // 0x130(0x08)
	UGizmoComponentAxisSource* AxisZSource; // 0x138(0x08)
	UGizmoComponentAxisSource* UnitAxisXSource; // 0x140(0x08)
	UGizmoComponentAxisSource* UnitAxisYSource; // 0x148(0x08)
	UGizmoComponentAxisSource* UnitAxisZSource; // 0x150(0x08)
	UGizmoTransformChangeStateTarget* StateTarget; // 0x158(0x08)
	UGizmoScaledTransformSource* ScaledTransformSource; // 0x160(0x08)
};

// Class InteractiveToolsFramework.TransformProxy
// Size: 0xf0 (Inherited: 0x28)
struct UTransformProxy : UObject {
	bool bRotatePerObject; // 0x70(0x01)
	bool bSetPivotMode; // 0x71(0x01)
	FTransform SharedTransform; // 0x90(0x30)
	FTransform InitialSharedTransform; // 0xc0(0x30)
};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseTransformSource : UObject {
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	USceneComponent* Component; // 0x48(0x08)
	bool bModifyComponentOnTransform; // 0x50(0x01)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0xe0 (Inherited: 0x48)
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48(0x10)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x50 (Inherited: 0x48)
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	UTransformProxy* Proxy; // 0x48(0x08)
};

