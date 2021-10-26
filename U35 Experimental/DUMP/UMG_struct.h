// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8 {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8 {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8 {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8 {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// ScriptStruct UMG.EventReply
// Size: 0xb8 (Inherited: 0x00)
struct FEventReply {
};

// ScriptStruct UMG.WidgetTransform
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTransform {
	FVector2D Translation; // 0x00(0x08)
	FVector2D Scale; // 0x08(0x08)
	FVector2D Shear; // 0x10(0x08)
	float Angle; // 0x18(0x04)
};

// ScriptStruct UMG.PaintContext
// Size: 0x30 (Inherited: 0x00)
struct FPaintContext {
};

// ScriptStruct UMG.ShapedTextOptions
// Size: 0x03 (Inherited: 0x00)
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	enum class ETextShapingMethod TextShapingMethod; // 0x01(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x02(0x01)
};

// ScriptStruct UMG.AnimationEventBinding
// Size: 0x28 (Inherited: 0x00)
struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x00(0x08)
	FDelegate Delegate; // 0x08(0x10)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18(0x01)
	FName UserTag; // 0x1c(0x08)
};

// ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x00)
struct FNamedSlotBinding {
	FName Name; // 0x00(0x08)
	UWidget* Content; // 0x08(0x08)
};

// ScriptStruct UMG.AnchorData
// Size: 0x28 (Inherited: 0x00)
struct FAnchorData {
	FMargin Offsets; // 0x00(0x10)
	FAnchors Anchors; // 0x10(0x10)
	FVector2D Alignment; // 0x20(0x08)
};

// ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28 (Inherited: 0x28)
struct FDynamicPropertyPath : FCachedPropertyPath {
};

// ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x00(0x04)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size: 0x4b0 (Inherited: 0x48)
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Translation[0x2]; // 0x48(0x140)
	FMovieSceneFloatChannel Rotation; // 0x188(0xa0)
	FMovieSceneFloatChannel Scale[0x2]; // 0x228(0x140)
	FMovieSceneFloatChannel Shear[0x2]; // 0x368(0x140)
	enum class EMovieSceneBlendType BlendType; // 0x4a8(0x01)
	FMovieScene2DTransformMask Mask; // 0x4ac(0x04)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x2d0 (Inherited: 0x48)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x48(0xa0)
	FMovieSceneFloatChannel LeftCurve; // 0xe8(0xa0)
	FMovieSceneFloatChannel RightCurve; // 0x188(0xa0)
	FMovieSceneFloatChannel BottomCurve; // 0x228(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0x2c8(0x01)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x90 (Inherited: 0x80)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80(0x10)
};

// ScriptStruct UMG.RichTextStyleRow
// Size: 0x270 (Inherited: 0x08)
struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x08(0x268)
};

// ScriptStruct UMG.RichImageRow
// Size: 0x90 (Inherited: 0x08)
struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x08(0x88)
};

// ScriptStruct UMG.SlateMeshVertex
// Size: 0x3c (Inherited: 0x00)
struct FSlateMeshVertex {
	FVector2D Position; // 0x00(0x08)
	FColor Color; // 0x08(0x04)
	FVector2D UV0; // 0x0c(0x08)
	FVector2D UV1; // 0x14(0x08)
	FVector2D UV2; // 0x1c(0x08)
	FVector2D UV3; // 0x24(0x08)
	FVector2D UV4; // 0x2c(0x08)
	FVector2D UV5; // 0x34(0x08)
};

// ScriptStruct UMG.SlateChildSize
// Size: 0x08 (Inherited: 0x00)
struct FSlateChildSize {
	float Value; // 0x00(0x04)
	enum class ESlateSizeRule SizeRule; // 0x04(0x01)
};

// ScriptStruct UMG.UserWidgetPool
// Size: 0x80 (Inherited: 0x00)
struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x00(0x10)
	TArray<UUserWidget*> InactiveWidgets; // 0x10(0x10)
};

// ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x00)
struct FWidgetAnimationBinding {
	FName WidgetName; // 0x00(0x08)
	FName SlotWidgetName; // 0x08(0x08)
	FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x01)
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x1c (Inherited: 0x00)
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class EWidgetAnimationEvent Action; // 0x00(0x01)
	FName AnimationToBind; // 0x04(0x08)
	FName FunctionNameToBind; // 0x0c(0x08)
	FName UserTag; // 0x14(0x08)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x50 (Inherited: 0x00)
struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x00(0x10)
	FName PropertyName; // 0x10(0x08)
	FName FunctionName; // 0x18(0x08)
	FDynamicPropertyPath SourcePath; // 0x20(0x28)
	enum class EBindingKind Kind; // 0x48(0x01)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xb8 (Inherited: 0xa8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData {
};

// ScriptStruct UMG.WidgetNavigationData
// Size: 0x24 (Inherited: 0x00)
struct FWidgetNavigationData {
	enum class EUINavigationRule Rule; // 0x00(0x01)
	FName WidgetToFocus; // 0x04(0x08)
	TWeakObjectPtr<UWidget> Widget; // 0x0c(0x08)
	FDelegate CustomDelegate; // 0x14(0x10)
};

