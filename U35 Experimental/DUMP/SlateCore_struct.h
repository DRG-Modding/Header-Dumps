// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8 {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8 {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8 {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8 {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	ESlateDebuggingFocusEvent_MAX = 3
};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8 {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8 {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8 {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	MouseButtonDown = 3,
	MouseButtonUp = 4,
	MouseButtonDoubleClick = 5,
	MouseWheel = 6,
	TouchStart = 7,
	TouchEnd = 8,
	DragDetected = 9,
	DragEnter = 10,
	DragLeave = 11,
	DragOver = 12,
	DragDrop = 13,
	DropMessage = 14,
	KeyDown = 15,
	KeyUp = 16,
	KeyChar = 17,
	AnalogInput = 18,
	TouchGesture = 19,
	COUNT = 20,
	ESlateDebuggingInputEvent_MAX = 21
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8 {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8 {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8 {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8 {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8 {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8 {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8 {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8 {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// ScriptStruct SlateCore.Geometry
// Size: 0x38 (Inherited: 0x00)
struct FGeometry {
};

// ScriptStruct SlateCore.SlateBrush
// Size: 0x88 (Inherited: 0x00)
struct FSlateBrush {
	FVector2D ImageSize; // 0x08(0x08)
	FMargin Margin; // 0x10(0x10)
	FSlateColor TintColor; // 0x20(0x28)
	UObject* ResourceObject; // 0x48(0x08)
	FName ResourceName; // 0x50(0x08)
	FBox2D UVRegion; // 0x58(0x14)
	enum class ESlateBrushDrawType DrawAs; // 0x6c(0x01)
	enum class ESlateBrushTileType Tiling; // 0x6d(0x01)
	enum class ESlateBrushMirrorType Mirroring; // 0x6e(0x01)
	enum class ESlateBrushImageType ImageType; // 0x6f(0x01)
	char bIsDynamicallyLoaded : 1; // 0x80(0x01)
	char bHasUObject : 1; // 0x80(0x01)
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x00)
struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x00(0x10)
	enum class ESlateColorStylingMode ColorUseRule; // 0x10(0x01)
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)
struct FMargin {
	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)
};

// ScriptStruct SlateCore.InputEvent
// Size: 0x18 (Inherited: 0x00)
struct FInputEvent {
};

// ScriptStruct SlateCore.PointerEvent
// Size: 0x70 (Inherited: 0x18)
struct FPointerEvent : FInputEvent {
};

// ScriptStruct SlateCore.CharacterEvent
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEvent : FInputEvent {
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x38 (Inherited: 0x18)
struct FKeyEvent : FInputEvent {
};

// ScriptStruct SlateCore.NavigationEvent
// Size: 0x20 (Inherited: 0x18)
struct FNavigationEvent : FInputEvent {
};

// ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x40 (Inherited: 0x38)
struct FAnalogInputEvent : FKeyEvent {
};

// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x50 (Inherited: 0x00)
struct FSlateFontInfo {
	UObject* FontObject; // 0x00(0x08)
	UObject* FontMaterial; // 0x08(0x08)
	FFontOutlineSettings OutlineSettings; // 0x10(0x20)
	FName TypefaceFontName; // 0x40(0x08)
	int32_t Size; // 0x48(0x04)
};

// ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x20 (Inherited: 0x00)
struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x00(0x04)
	bool bSeparateFillAlpha; // 0x04(0x01)
	bool bApplyOutlineToDropShadows; // 0x05(0x01)
	UObject* OutlineMaterial; // 0x08(0x08)
	FLinearColor OutlineColor; // 0x10(0x10)
};

// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 (Inherited: 0x00)
struct FSlateWidgetStyle {
};

// ScriptStruct SlateCore.TableRowStyle
// Size: 0x7c8 (Inherited: 0x08)
struct FTableRowStyle : FSlateWidgetStyle {
	FSlateBrush SelectorFocusedBrush; // 0x08(0x88)
	FSlateBrush ActiveHoveredBrush; // 0x90(0x88)
	FSlateBrush ActiveBrush; // 0x118(0x88)
	FSlateBrush InactiveHoveredBrush; // 0x1a0(0x88)
	FSlateBrush InactiveBrush; // 0x228(0x88)
	FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2b0(0x88)
	FSlateBrush EvenRowBackgroundBrush; // 0x338(0x88)
	FSlateBrush OddRowBackgroundHoveredBrush; // 0x3c0(0x88)
	FSlateBrush OddRowBackgroundBrush; // 0x448(0x88)
	FSlateColor TextColor; // 0x4d0(0x28)
	FSlateColor SelectedTextColor; // 0x4f8(0x28)
	FSlateBrush DropIndicator_Above; // 0x520(0x88)
	FSlateBrush DropIndicator_Onto; // 0x5a8(0x88)
	FSlateBrush DropIndicator_Below; // 0x630(0x88)
	FSlateBrush ActiveHighlightedBrush; // 0x6b8(0x88)
	FSlateBrush InactiveHighlightedBrush; // 0x740(0x88)
};

// ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x3f0 (Inherited: 0x08)
struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x08(0x3b8)
	FSlateSound PressedSlateSound; // 0x3c0(0x18)
	FSlateSound SelectionChangeSlateSound; // 0x3d8(0x18)
};

// ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x00)
struct FSlateSound {
	UObject* ResourceObject; // 0x00(0x08)
};

// ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x3b8 (Inherited: 0x08)
struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x08(0x278)
	FSlateBrush DownArrowImage; // 0x280(0x88)
	FVector2D ShadowOffset; // 0x308(0x08)
	FLinearColor ShadowColorAndOpacity; // 0x310(0x10)
	FSlateBrush MenuBorderBrush; // 0x320(0x88)
	FMargin MenuBorderPadding; // 0x3a8(0x10)
};

// ScriptStruct SlateCore.ButtonStyle
// Size: 0x278 (Inherited: 0x08)
struct FButtonStyle : FSlateWidgetStyle {
	FSlateBrush Normal; // 0x08(0x88)
	FSlateBrush Hovered; // 0x90(0x88)
	FSlateBrush Pressed; // 0x118(0x88)
	FSlateBrush Disabled; // 0x1a0(0x88)
	FMargin NormalPadding; // 0x228(0x10)
	FMargin PressedPadding; // 0x238(0x10)
	FSlateSound PressedSlateSound; // 0x248(0x18)
	FSlateSound HoveredSlateSound; // 0x260(0x18)
};

// ScriptStruct SlateCore.EditableTextStyle
// Size: 0x218 (Inherited: 0x08)
struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x08(0x50)
	FSlateColor ColorAndOpacity; // 0x58(0x28)
	FSlateBrush BackgroundImageSelected; // 0x80(0x88)
	FSlateBrush BackgroundImageComposing; // 0x108(0x88)
	FSlateBrush CaretImage; // 0x190(0x88)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0x7f0 (Inherited: 0x08)
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x08(0x88)
	FSlateBrush BackgroundImageHovered; // 0x90(0x88)
	FSlateBrush BackgroundImageFocused; // 0x118(0x88)
	FSlateBrush BackgroundImageReadOnly; // 0x1a0(0x88)
	FMargin Padding; // 0x228(0x10)
	FSlateFontInfo Font; // 0x238(0x50)
	FSlateColor ForegroundColor; // 0x288(0x28)
	FSlateColor BackgroundColor; // 0x2b0(0x28)
	FSlateColor ReadOnlyForegroundColor; // 0x2d8(0x28)
	FMargin HScrollBarPadding; // 0x300(0x10)
	FMargin VScrollBarPadding; // 0x310(0x10)
	FScrollBarStyle ScrollBarStyle; // 0x320(0x4d0)
};

// ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x4d0 (Inherited: 0x08)
struct FScrollBarStyle : FSlateWidgetStyle {
	FSlateBrush HorizontalBackgroundImage; // 0x08(0x88)
	FSlateBrush VerticalBackgroundImage; // 0x90(0x88)
	FSlateBrush VerticalTopSlotImage; // 0x118(0x88)
	FSlateBrush HorizontalTopSlotImage; // 0x1a0(0x88)
	FSlateBrush VerticalBottomSlotImage; // 0x228(0x88)
	FSlateBrush HorizontalBottomSlotImage; // 0x2b0(0x88)
	FSlateBrush NormalThumbImage; // 0x338(0x88)
	FSlateBrush HoveredThumbImage; // 0x3c0(0x88)
	FSlateBrush DraggedThumbImage; // 0x448(0x88)
};

// ScriptStruct SlateCore.TextBlockStyle
// Size: 0x268 (Inherited: 0x08)
struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x08(0x50)
	FSlateColor ColorAndOpacity; // 0x58(0x28)
	FVector2D ShadowOffset; // 0x80(0x08)
	FLinearColor ShadowColorAndOpacity; // 0x88(0x10)
	FSlateColor SelectedBackgroundColor; // 0x98(0x28)
	FLinearColor HighlightColor; // 0xc0(0x10)
	FSlateBrush HighlightShape; // 0xd0(0x88)
	FSlateBrush StrikeBrush; // 0x158(0x88)
	FSlateBrush UnderlineBrush; // 0x1e0(0x88)
};

// ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x2e8 (Inherited: 0x08)
struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x08(0x88)
	FSlateBrush HoveredBackgroundBrush; // 0x90(0x88)
	FSlateBrush ActiveFillBrush; // 0x118(0x88)
	FSlateBrush InactiveFillBrush; // 0x1a0(0x88)
	FSlateBrush ArrowsImage; // 0x228(0x88)
	FSlateColor ForegroundColor; // 0x2b0(0x28)
	FMargin TextPadding; // 0x2d8(0x10)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
};

// ScriptStruct SlateCore.MotionEvent
// Size: 0x48 (Inherited: 0x18)
struct FMotionEvent : FInputEvent {
};

// ScriptStruct SlateCore.CompositeFont
// Size: 0x38 (Inherited: 0x00)
struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x00(0x10)
	FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
	TArray<FCompositeSubFont> SubTypefaces; // 0x28(0x10)
};

// ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18 (Inherited: 0x00)
struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x00(0x10)
	float ScalingFactor; // 0x10(0x04)
};

// ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x00)
struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.TypefaceEntry
// Size: 0x28 (Inherited: 0x00)
struct FTypefaceEntry {
	FName Name; // 0x00(0x08)
	FFontData Font; // 0x08(0x20)
};

// ScriptStruct SlateCore.FontData
// Size: 0x20 (Inherited: 0x00)
struct FFontData {
	FString FontFilename; // 0x00(0x10)
	enum class EFontHinting Hinting; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	int32_t SubFaceIndex; // 0x14(0x04)
	UObject* FontFaceAsset; // 0x18(0x08)
};

// ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x18)
struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18(0x10)
	FString Cultures; // 0x28(0x10)
};

// ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x08 (Inherited: 0x00)
struct FCaptureLostEvent {
};

// ScriptStruct SlateCore.WindowStyle
// Size: 0x1058 (Inherited: 0x08)
struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x08(0x278)
	FButtonStyle MaximizeButtonStyle; // 0x280(0x278)
	FButtonStyle RestoreButtonStyle; // 0x4f8(0x278)
	FButtonStyle CloseButtonStyle; // 0x770(0x278)
	FTextBlockStyle TitleTextStyle; // 0x9e8(0x268)
	FSlateBrush ActiveTitleBrush; // 0xc50(0x88)
	FSlateBrush InactiveTitleBrush; // 0xcd8(0x88)
	FSlateBrush FlashTitleBrush; // 0xd60(0x88)
	FSlateColor BackgroundColor; // 0xde8(0x28)
	FSlateBrush OutlineBrush; // 0xe10(0x88)
	FSlateColor OutlineColor; // 0xe98(0x28)
	FSlateBrush BorderBrush; // 0xec0(0x88)
	FSlateBrush BackgroundBrush; // 0xf48(0x88)
	FSlateBrush ChildBackgroundBrush; // 0xfd0(0x88)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x118 (Inherited: 0x08)
struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x08(0x88)
	FSlateBrush BottomShadowBrush; // 0x90(0x88)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x228 (Inherited: 0x08)
struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x08(0x88)
	FSlateBrush BottomShadowBrush; // 0x90(0x88)
	FSlateBrush LeftShadowBrush; // 0x118(0x88)
	FSlateBrush RightShadowBrush; // 0x1a0(0x88)
};

// ScriptStruct SlateCore.DockTabStyle
// Size: 0x700 (Inherited: 0x08)
struct FDockTabStyle : FSlateWidgetStyle {
	FButtonStyle CloseButtonStyle; // 0x08(0x278)
	FSlateBrush NormalBrush; // 0x280(0x88)
	FSlateBrush ActiveBrush; // 0x308(0x88)
	FSlateBrush ColorOverlayTabBrush; // 0x390(0x88)
	FSlateBrush ColorOverlayIconBrush; // 0x418(0x88)
	FSlateBrush ForegroundBrush; // 0x4a0(0x88)
	FSlateBrush HoveredBrush; // 0x528(0x88)
	FSlateBrush ContentAreaBrush; // 0x5b0(0x88)
	FSlateBrush TabWellBrush; // 0x638(0x88)
	FMargin TabPadding; // 0x6c0(0x10)
	float OverlapWidth; // 0x6d0(0x04)
	FSlateColor FlashColor; // 0x6d8(0x28)
};

// ScriptStruct SlateCore.HeaderRowStyle
// Size: 0xb70 (Inherited: 0x08)
struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x08(0x4d0)
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8(0x4d0)
	FSplitterStyle ColumnSplitterStyle; // 0x9a8(0x118)
	FSlateBrush BackgroundBrush; // 0xac0(0x88)
	FSlateColor ForegroundColor; // 0xb48(0x28)
};

// ScriptStruct SlateCore.SplitterStyle
// Size: 0x118 (Inherited: 0x08)
struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x08(0x88)
	FSlateBrush HandleHighlightBrush; // 0x90(0x88)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x4d0 (Inherited: 0x08)
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	FSlateBrush SortPrimaryAscendingImage; // 0x08(0x88)
	FSlateBrush SortPrimaryDescendingImage; // 0x90(0x88)
	FSlateBrush SortSecondaryAscendingImage; // 0x118(0x88)
	FSlateBrush SortSecondaryDescendingImage; // 0x1a0(0x88)
	FSlateBrush NormalBrush; // 0x228(0x88)
	FSlateBrush HoveredBrush; // 0x2b0(0x88)
	FSlateBrush MenuDropdownImage; // 0x338(0x88)
	FSlateBrush MenuDropdownNormalBorderBrush; // 0x3c0(0x88)
	FSlateBrush MenuDropdownHoveredBorderBrush; // 0x448(0x88)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0x98 (Inherited: 0x08)
struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x08(0x88)
	int16_t Baseline; // 0x90(0x02)
};

// ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x5f0 (Inherited: 0x08)
struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x08(0x340)
	FSlateBrush HighVolumeImage; // 0x348(0x88)
	FSlateBrush MidVolumeImage; // 0x3d0(0x88)
	FSlateBrush LowVolumeImage; // 0x458(0x88)
	FSlateBrush NoVolumeImage; // 0x4e0(0x88)
	FSlateBrush MutedImage; // 0x568(0x88)
};

// ScriptStruct SlateCore.SliderStyle
// Size: 0x340 (Inherited: 0x08)
struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x08(0x88)
	FSlateBrush HoveredBarImage; // 0x90(0x88)
	FSlateBrush DisabledBarImage; // 0x118(0x88)
	FSlateBrush NormalThumbImage; // 0x1a0(0x88)
	FSlateBrush HoveredThumbImage; // 0x228(0x88)
	FSlateBrush DisabledThumbImage; // 0x2b0(0x88)
	float BarThickness; // 0x338(0x04)
};

// ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xa80 (Inherited: 0x08)
struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x08(0x7f0)
	FSlateFontInfo ActiveFontInfo; // 0x7f8(0x50)
	FSlateBrush UpArrowImage; // 0x848(0x88)
	FSlateBrush DownArrowImage; // 0x8d0(0x88)
	FSlateBrush GlassImage; // 0x958(0x88)
	FSlateBrush ClearImage; // 0x9e0(0x88)
	FMargin ImagePadding; // 0xa68(0x10)
	bool bLeftAlignButtons; // 0xa78(0x01)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x120 (Inherited: 0x08)
struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x08(0x88)
	FSlateBrush ExpandedImage; // 0x90(0x88)
	float RolloutAnimationSeconds; // 0x118(0x04)
};

// ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x1a0 (Inherited: 0x08)
struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x08(0x88)
	FSlateBrush FillImage; // 0x90(0x88)
	FSlateBrush MarqueeImage; // 0x118(0x88)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xa60 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x08(0x7f0)
	FTextBlockStyle TextStyle; // 0x7f8(0x268)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x4f8 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x08(0x278)
	FTextBlockStyle TextStyle; // 0x280(0x268)
	FMargin Padding; // 0x4e8(0x10)
};

// ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x580 (Inherited: 0x08)
struct FCheckBoxStyle : FSlateWidgetStyle {
	enum class ESlateCheckBoxType CheckBoxType; // 0x08(0x01)
	FSlateBrush UncheckedImage; // 0x10(0x88)
	FSlateBrush UncheckedHoveredImage; // 0x98(0x88)
	FSlateBrush UncheckedPressedImage; // 0x120(0x88)
	FSlateBrush CheckedImage; // 0x1a8(0x88)
	FSlateBrush CheckedHoveredImage; // 0x230(0x88)
	FSlateBrush CheckedPressedImage; // 0x2b8(0x88)
	FSlateBrush UndeterminedImage; // 0x340(0x88)
	FSlateBrush UndeterminedHoveredImage; // 0x3c8(0x88)
	FSlateBrush UndeterminedPressedImage; // 0x450(0x88)
	FMargin Padding; // 0x4d8(0x10)
	FSlateColor ForegroundColor; // 0x4e8(0x28)
	FSlateColor BorderBackgroundColor; // 0x510(0x28)
	FSlateSound CheckedSlateSound; // 0x538(0x18)
	FSlateSound UncheckedSlateSound; // 0x550(0x18)
	FSlateSound HoveredSlateSound; // 0x568(0x18)
};

