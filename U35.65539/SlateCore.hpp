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

struct FGeometry
{
}

struct FSlateBrush
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

struct FSlateColor
{
    FLinearColor SpecifiedColor;
    TEnumAsByte<ESlateColorStylingMode::Type> ColorUseRule;
}

struct FMargin
{
    float Left;
    float Top;
    float Right;
    float Bottom;
}

struct FInputEvent
{
}

struct FPointerEvent : FInputEvent
{
}

struct FCharacterEvent : FInputEvent
{
}

struct FKeyEvent : FInputEvent
{
}

struct FNavigationEvent : FInputEvent
{
}

struct FAnalogInputEvent : FKeyEvent
{
}

struct FSlateFontInfo
{
    UObject* FontObject;
    UObject* FontMaterial;
    FFontOutlineSettings OutlineSettings;
    FName TypefaceFontName;
    int32 Size;
}

struct FFontOutlineSettings
{
    int32 OutlineSize;
    bool bSeparateFillAlpha;
    bool bApplyOutlineToDropShadows;
    UObject* OutlineMaterial;
    FLinearColor OutlineColor;
}

struct FSlateWidgetStyle
{
}

struct FTableRowStyle : FSlateWidgetStyle
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

struct FComboBoxStyle : FSlateWidgetStyle
{
    FComboButtonStyle ComboButtonStyle;
    FSlateSound PressedSlateSound;
    FSlateSound SelectionChangeSlateSound;
}

struct FSlateSound
{
    UObject* ResourceObject;
}

struct FComboButtonStyle : FSlateWidgetStyle
{
    FButtonStyle ButtonStyle;
    FSlateBrush DownArrowImage;
    FVector2D ShadowOffset;
    FLinearColor ShadowColorAndOpacity;
    FSlateBrush MenuBorderBrush;
    FMargin MenuBorderPadding;
}

struct FButtonStyle : FSlateWidgetStyle
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

struct FEditableTextStyle : FSlateWidgetStyle
{
    FSlateFontInfo Font;
    FSlateColor ColorAndOpacity;
    FSlateBrush BackgroundImageSelected;
    FSlateBrush BackgroundImageComposing;
    FSlateBrush CaretImage;
}

struct FEditableTextBoxStyle : FSlateWidgetStyle
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

struct FScrollBarStyle : FSlateWidgetStyle
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

struct FTextBlockStyle : FSlateWidgetStyle
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

struct FSpinBoxStyle : FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;
    FSlateBrush HoveredBackgroundBrush;
    FSlateBrush ActiveFillBrush;
    FSlateBrush InactiveFillBrush;
    FSlateBrush ArrowsImage;
    FSlateColor ForegroundColor;
    FMargin TextPadding;
}

struct FFocusEvent
{
}

struct FMotionEvent : FInputEvent
{
}

struct FCompositeFont
{
    FTypeface DefaultTypeface;
    FCompositeFallbackFont FallbackTypeface;
    TArray<FCompositeSubFont> SubTypefaces;
}

struct FCompositeFallbackFont
{
    FTypeface Typeface;
    float ScalingFactor;
}

struct FTypeface
{
    TArray<FTypefaceEntry> Fonts;
}

struct FTypefaceEntry
{
    FName Name;
    FFontData Font;
}

struct FFontData
{
    FString FontFilename;
    EFontHinting Hinting;
    EFontLoadingPolicy LoadingPolicy;
    int32 SubFaceIndex;
    UObject* FontFaceAsset;
}

struct FCompositeSubFont : FCompositeFallbackFont
{
    TArray<FInt32Range> CharacterRanges;
    FString Cultures;
}

struct FCaptureLostEvent
{
}

struct FWindowStyle : FSlateWidgetStyle
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

struct FScrollBorderStyle : FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;
    FSlateBrush BottomShadowBrush;
}

struct FScrollBoxStyle : FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;
    FSlateBrush BottomShadowBrush;
    FSlateBrush LeftShadowBrush;
    FSlateBrush RightShadowBrush;
}

struct FDockTabStyle : FSlateWidgetStyle
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

struct FHeaderRowStyle : FSlateWidgetStyle
{
    FTableColumnHeaderStyle ColumnStyle;
    FTableColumnHeaderStyle LastColumnStyle;
    FSplitterStyle ColumnSplitterStyle;
    FSlateBrush BackgroundBrush;
    FSlateColor ForegroundColor;
}

struct FSplitterStyle : FSlateWidgetStyle
{
    FSlateBrush HandleNormalBrush;
    FSlateBrush HandleHighlightBrush;
}

struct FTableColumnHeaderStyle : FSlateWidgetStyle
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

struct FInlineTextImageStyle : FSlateWidgetStyle
{
    FSlateBrush Image;
    int16 Baseline;
}

struct FVolumeControlStyle : FSlateWidgetStyle
{
    FSliderStyle SliderStyle;
    FSlateBrush HighVolumeImage;
    FSlateBrush MidVolumeImage;
    FSlateBrush LowVolumeImage;
    FSlateBrush NoVolumeImage;
    FSlateBrush MutedImage;
}

struct FSliderStyle : FSlateWidgetStyle
{
    FSlateBrush NormalBarImage;
    FSlateBrush HoveredBarImage;
    FSlateBrush DisabledBarImage;
    FSlateBrush NormalThumbImage;
    FSlateBrush HoveredThumbImage;
    FSlateBrush DisabledThumbImage;
    float BarThickness;
}

struct FSearchBoxStyle : FSlateWidgetStyle
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

struct FExpandableAreaStyle : FSlateWidgetStyle
{
    FSlateBrush CollapsedImage;
    FSlateBrush ExpandedImage;
    float RolloutAnimationSeconds;
}

struct FProgressBarStyle : FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;
    FSlateBrush FillImage;
    FSlateBrush MarqueeImage;
}

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{
    FEditableTextBoxStyle EditableTextBoxStyle;
    FTextBlockStyle TextStyle;
}

struct FHyperlinkStyle : FSlateWidgetStyle
{
    FButtonStyle UnderlineStyle;
    FTextBlockStyle TextStyle;
    FMargin Padding;
}

struct FCheckBoxStyle : FSlateWidgetStyle
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
