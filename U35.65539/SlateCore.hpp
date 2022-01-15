#ifndef UE4SS_SDK_SlateCore_HPP
#define UE4SS_SDK_SlateCore_HPP

#include "SlateCore_enums.hpp"

class UFontBulkData : UObject
{
}

class UFontFaceInterface : UInterface
{
}

class UFontProviderInterface : UInterface
{
}

class USlateTypes : UObject
{
}

class USlateWidgetStyleAsset : UObject
{
    USlateWidgetStyleContainerBase* CustomStyle;
}

class USlateWidgetStyleContainerBase : UObject
{
}

class USlateWidgetStyleContainerInterface : UInterface
{
}

struct UGeometry
{
}

struct USlateBrush
{
    FVector2D ImageSize;
    FMargin Margin;
    FSlateColor TintColor;
    UObject* ResourceObject;
    FName ResourceName;
    FBox2D UVRegion;
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;
    TEnumAsByte<ESlateBrushTileType::Type> Tiling;
    TEnumAsByte<ESlateBrushMirrorType::Type> Mirroring;
    TEnumAsByte<ESlateBrushImageType::Type> ImageType;
    uint8 bIsDynamicallyLoaded;
    uint8 bHasUObject;
}

struct USlateColor
{
    FLinearColor SpecifiedColor;
    TEnumAsByte<ESlateColorStylingMode::Type> ColorUseRule;
}

struct UMargin
{
    float Left;
    float Top;
    float Right;
    float Bottom;
}

struct UInputEvent
{
}

struct UPointerEvent : FInputEvent
{
}

struct UCharacterEvent : FInputEvent
{
}

struct UKeyEvent : FInputEvent
{
}

struct UNavigationEvent : FInputEvent
{
}

struct UAnalogInputEvent : FKeyEvent
{
}

struct USlateFontInfo
{
    UObject* FontObject;
    UObject* FontMaterial;
    FFontOutlineSettings OutlineSettings;
    FName TypefaceFontName;
    int32 Size;
}

struct UFontOutlineSettings
{
    int32 OutlineSize;
    bool bSeparateFillAlpha;
    bool bApplyOutlineToDropShadows;
    UObject* OutlineMaterial;
    FLinearColor OutlineColor;
}

struct USlateWidgetStyle
{
}

struct UTableRowStyle : FSlateWidgetStyle
{
    FSlateBrush SelectorFocusedBrush;
    FSlateBrush ActiveHoveredBrush;
    FSlateBrush ActiveBrush;
    FSlateBrush InactiveHoveredBrush;
    FSlateBrush InactiveBrush;
    FSlateBrush EvenRowBackgroundHoveredBrush;
    FSlateBrush EvenRowBackgroundBrush;
    FSlateBrush OddRowBackgroundHoveredBrush;
    FSlateBrush OddRowBackgroundBrush;
    FSlateColor TextColor;
    FSlateColor SelectedTextColor;
    FSlateBrush DropIndicator_Above;
    FSlateBrush DropIndicator_Onto;
    FSlateBrush DropIndicator_Below;
    FSlateBrush ActiveHighlightedBrush;
    FSlateBrush InactiveHighlightedBrush;
}

struct UComboBoxStyle : FSlateWidgetStyle
{
    FComboButtonStyle ComboButtonStyle;
    FSlateSound PressedSlateSound;
    FSlateSound SelectionChangeSlateSound;
}

struct USlateSound
{
    UObject* ResourceObject;
}

struct UComboButtonStyle : FSlateWidgetStyle
{
    FButtonStyle ButtonStyle;
    FSlateBrush DownArrowImage;
    FVector2D ShadowOffset;
    FLinearColor ShadowColorAndOpacity;
    FSlateBrush MenuBorderBrush;
    FMargin MenuBorderPadding;
}

struct UButtonStyle : FSlateWidgetStyle
{
    FSlateBrush Normal;
    FSlateBrush Hovered;
    FSlateBrush Pressed;
    FSlateBrush Disabled;
    FMargin NormalPadding;
    FMargin PressedPadding;
    FSlateSound PressedSlateSound;
    FSlateSound HoveredSlateSound;
}

struct UEditableTextStyle : FSlateWidgetStyle
{
    FSlateFontInfo Font;
    FSlateColor ColorAndOpacity;
    FSlateBrush BackgroundImageSelected;
    FSlateBrush BackgroundImageComposing;
    FSlateBrush CaretImage;
}

struct UEditableTextBoxStyle : FSlateWidgetStyle
{
    FSlateBrush BackgroundImageNormal;
    FSlateBrush BackgroundImageHovered;
    FSlateBrush BackgroundImageFocused;
    FSlateBrush BackgroundImageReadOnly;
    FMargin Padding;
    FSlateFontInfo Font;
    FSlateColor ForegroundColor;
    FSlateColor BackgroundColor;
    FSlateColor ReadOnlyForegroundColor;
    FMargin HScrollBarPadding;
    FMargin VScrollBarPadding;
    FScrollBarStyle ScrollBarStyle;
}

struct UScrollBarStyle : FSlateWidgetStyle
{
    FSlateBrush HorizontalBackgroundImage;
    FSlateBrush VerticalBackgroundImage;
    FSlateBrush VerticalTopSlotImage;
    FSlateBrush HorizontalTopSlotImage;
    FSlateBrush VerticalBottomSlotImage;
    FSlateBrush HorizontalBottomSlotImage;
    FSlateBrush NormalThumbImage;
    FSlateBrush HoveredThumbImage;
    FSlateBrush DraggedThumbImage;
}

struct UTextBlockStyle : FSlateWidgetStyle
{
    FSlateFontInfo Font;
    FSlateColor ColorAndOpacity;
    FVector2D ShadowOffset;
    FLinearColor ShadowColorAndOpacity;
    FSlateColor SelectedBackgroundColor;
    FLinearColor HighlightColor;
    FSlateBrush HighlightShape;
    FSlateBrush StrikeBrush;
    FSlateBrush UnderlineBrush;
}

struct USpinBoxStyle : FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;
    FSlateBrush HoveredBackgroundBrush;
    FSlateBrush ActiveFillBrush;
    FSlateBrush InactiveFillBrush;
    FSlateBrush ArrowsImage;
    FSlateColor ForegroundColor;
    FMargin TextPadding;
}

struct UFocusEvent
{
}

struct UMotionEvent : FInputEvent
{
}

struct UCompositeFont
{
    FTypeface DefaultTypeface;
    FCompositeFallbackFont FallbackTypeface;
    TArray<FCompositeSubFont> SubTypefaces;
}

struct UCompositeFallbackFont
{
    FTypeface Typeface;
    float ScalingFactor;
}

struct UTypeface
{
    TArray<FTypefaceEntry> Fonts;
}

struct UTypefaceEntry
{
    FName Name;
    FFontData Font;
}

struct UFontData
{
    FString FontFilename;
    EFontHinting Hinting;
    EFontLoadingPolicy LoadingPolicy;
    int32 SubFaceIndex;
    UObject* FontFaceAsset;
}

struct UCompositeSubFont : FCompositeFallbackFont
{
    TArray<FInt32Range> CharacterRanges;
    FString Cultures;
}

struct UCaptureLostEvent
{
}

struct UWindowStyle : FSlateWidgetStyle
{
    FButtonStyle MinimizeButtonStyle;
    FButtonStyle MaximizeButtonStyle;
    FButtonStyle RestoreButtonStyle;
    FButtonStyle CloseButtonStyle;
    FTextBlockStyle TitleTextStyle;
    FSlateBrush ActiveTitleBrush;
    FSlateBrush InactiveTitleBrush;
    FSlateBrush FlashTitleBrush;
    FSlateColor BackgroundColor;
    FSlateBrush OutlineBrush;
    FSlateColor OutlineColor;
    FSlateBrush BorderBrush;
    FSlateBrush BackgroundBrush;
    FSlateBrush ChildBackgroundBrush;
}

struct UScrollBorderStyle : FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;
    FSlateBrush BottomShadowBrush;
}

struct UScrollBoxStyle : FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;
    FSlateBrush BottomShadowBrush;
    FSlateBrush LeftShadowBrush;
    FSlateBrush RightShadowBrush;
}

struct UDockTabStyle : FSlateWidgetStyle
{
    FButtonStyle CloseButtonStyle;
    FSlateBrush NormalBrush;
    FSlateBrush ActiveBrush;
    FSlateBrush ColorOverlayTabBrush;
    FSlateBrush ColorOverlayIconBrush;
    FSlateBrush ForegroundBrush;
    FSlateBrush HoveredBrush;
    FSlateBrush ContentAreaBrush;
    FSlateBrush TabWellBrush;
    FMargin TabPadding;
    float OverlapWidth;
    FSlateColor FlashColor;
}

struct UHeaderRowStyle : FSlateWidgetStyle
{
    FTableColumnHeaderStyle ColumnStyle;
    FTableColumnHeaderStyle LastColumnStyle;
    FSplitterStyle ColumnSplitterStyle;
    FSlateBrush BackgroundBrush;
    FSlateColor ForegroundColor;
}

struct USplitterStyle : FSlateWidgetStyle
{
    FSlateBrush HandleNormalBrush;
    FSlateBrush HandleHighlightBrush;
}

struct UTableColumnHeaderStyle : FSlateWidgetStyle
{
    FSlateBrush SortPrimaryAscendingImage;
    FSlateBrush SortPrimaryDescendingImage;
    FSlateBrush SortSecondaryAscendingImage;
    FSlateBrush SortSecondaryDescendingImage;
    FSlateBrush NormalBrush;
    FSlateBrush HoveredBrush;
    FSlateBrush MenuDropdownImage;
    FSlateBrush MenuDropdownNormalBorderBrush;
    FSlateBrush MenuDropdownHoveredBorderBrush;
}

struct UInlineTextImageStyle : FSlateWidgetStyle
{
    FSlateBrush Image;
    int16 Baseline;
}

struct UVolumeControlStyle : FSlateWidgetStyle
{
    FSliderStyle SliderStyle;
    FSlateBrush HighVolumeImage;
    FSlateBrush MidVolumeImage;
    FSlateBrush LowVolumeImage;
    FSlateBrush NoVolumeImage;
    FSlateBrush MutedImage;
}

struct USliderStyle : FSlateWidgetStyle
{
    FSlateBrush NormalBarImage;
    FSlateBrush HoveredBarImage;
    FSlateBrush DisabledBarImage;
    FSlateBrush NormalThumbImage;
    FSlateBrush HoveredThumbImage;
    FSlateBrush DisabledThumbImage;
    float BarThickness;
}

struct USearchBoxStyle : FSlateWidgetStyle
{
    FEditableTextBoxStyle TextBoxStyle;
    FSlateFontInfo ActiveFontInfo;
    FSlateBrush UpArrowImage;
    FSlateBrush DownArrowImage;
    FSlateBrush GlassImage;
    FSlateBrush ClearImage;
    FMargin ImagePadding;
    bool bLeftAlignButtons;
}

struct UExpandableAreaStyle : FSlateWidgetStyle
{
    FSlateBrush CollapsedImage;
    FSlateBrush ExpandedImage;
    float RolloutAnimationSeconds;
}

struct UProgressBarStyle : FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;
    FSlateBrush FillImage;
    FSlateBrush MarqueeImage;
}

struct UInlineEditableTextBlockStyle : FSlateWidgetStyle
{
    FEditableTextBoxStyle EditableTextBoxStyle;
    FTextBlockStyle TextStyle;
}

struct UHyperlinkStyle : FSlateWidgetStyle
{
    FButtonStyle UnderlineStyle;
    FTextBlockStyle TextStyle;
    FMargin Padding;
}

struct UCheckBoxStyle : FSlateWidgetStyle
{
    TEnumAsByte<ESlateCheckBoxType::Type> CheckBoxType;
    FSlateBrush UncheckedImage;
    FSlateBrush UncheckedHoveredImage;
    FSlateBrush UncheckedPressedImage;
    FSlateBrush CheckedImage;
    FSlateBrush CheckedHoveredImage;
    FSlateBrush CheckedPressedImage;
    FSlateBrush UndeterminedImage;
    FSlateBrush UndeterminedHoveredImage;
    FSlateBrush UndeterminedPressedImage;
    FMargin Padding;
    FSlateColor ForegroundColor;
    FSlateColor BorderBackgroundColor;
    FSlateSound CheckedSlateSound;
    FSlateSound UncheckedSlateSound;
    FSlateSound HoveredSlateSound;
}

#endif
