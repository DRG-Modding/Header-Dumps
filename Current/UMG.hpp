#ifndef UE4SS_SDK_UMG_HPP
#define UE4SS_SDK_UMG_HPP

#include "UMG_enums.hpp"

struct FAnchorData
{
    FMargin Offsets;
    FAnchors Anchors;
    FVector2D Alignment;

};

struct FAnimationEventBinding
{
    class UWidgetAnimation* Animation;
    FAnimationEventBindingDelegate Delegate;
    void WidgetAnimationDynamicEvent();
    EWidgetAnimationEvent AnimationEvent;
    FName UserTag;

};

struct FBlueprintWidgetAnimationDelegateBinding
{
    EWidgetAnimationEvent Action;
    FName AnimationToBind;
    FName FunctionNameToBind;
    FName UserTag;

};

struct FDelegateRuntimeBinding
{
    FString ObjectName;
    FName PropertyName;
    FName FunctionName;
    FDynamicPropertyPath SourcePath;
    EBindingKind Kind;

};

struct FDynamicPropertyPath : public FCachedPropertyPath
{
};

struct FEventReply
{
};

struct FMovieScene2DTransformMask
{
    uint32 Mask;

};

struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    TArray<FName> BrushPropertyNamePath;

};

struct FNamedSlotBinding
{
    FName Name;
    class UWidget* Content;

};

struct FPaintContext
{
};

struct FRadialBoxSettings
{
    float StartingAngle;
    bool bDistributeItemsEvenly;
    float AngleBetweenItems;
    float SectorCentralAngle;

};

struct FRichImageRow : public FTableRowBase
{
    FSlateBrush Brush;

};

struct FRichTextStyleRow : public FTableRowBase
{
    FTextBlockStyle TextStyle;

};

struct FShapedTextOptions
{
    uint8 bOverride_TextShapingMethod;
    uint8 bOverride_TextFlowDirection;
    ETextShapingMethod TextShapingMethod;
    ETextFlowDirection TextFlowDirection;

};

struct FSlateChildSize
{
    float Value;
    TEnumAsByte<ESlateSizeRule::Type> SizeRule;

};

struct FSlateMeshVertex
{
    FVector2D Position;
    FColor Color;
    FVector2D UV0;
    FVector2D UV1;
    FVector2D UV2;
    FVector2D UV3;
    FVector2D UV4;
    FVector2D UV5;

};

struct FUserWidgetPool
{
    TArray<class UUserWidget*> ActiveWidgets;
    TArray<class UUserWidget*> InactiveWidgets;

};

struct FWidgetAnimationBinding
{
    FName WidgetName;
    FName SlotWidgetName;
    FGuid AnimationGuid;
    bool bIsRootWidget;

};

struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{
};

struct FWidgetNavigationData
{
    EUINavigationRule Rule;
    FName WidgetToFocus;
    TWeakObjectPtr<class UWidget> Widget;
    FWidgetNavigationDataCustomDelegate CustomDelegate;
    class UWidget* CustomWidgetNavigationDelegate(EUINavigation Navigation);

};

struct FWidgetTransform
{
    FVector2D Translation;
    FVector2D Scale;
    FVector2D Shear;
    float Angle;

};

class INamedSlotInterface : public IInterface
{
};

class IUserListEntry : public IInterface
{

    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnEntryReleased();
};

class IUserObjectListEntry : public IUserListEntry
{

    void OnListItemObjectSet(class UObject* ListItemObject);
};

class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
    FAsyncTaskDownloadImageOnSuccess OnSuccess;
    void DownloadImageDelegate(class UTexture2DDynamic* Texture);
    FAsyncTaskDownloadImageOnFail OnFail;
    void DownloadImageDelegate(class UTexture2DDynamic* Texture);

    class UAsyncTaskDownloadImage* DownloadImage(FString URL);
};

class UBackgroundBlur : public UContentWidget
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    bool bApplyAlphaToBlur;
    float BlurStrength;
    bool bOverrideAutoRadiusCalculation;
    int32 BlurRadius;
    FSlateBrush LowQualityFallbackBrush;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetBlurStrength(float InStrength);
    void SetBlurRadius(int32 InBlurRadius);
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

class UBackgroundBlurSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UBoolBinding : public UPropertyBinding
{

    bool GetValue();
};

class UBorder : public UContentWidget
{
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    uint8 bShowEffectWhenDisabled;
    FLinearColor ContentColorAndOpacity;
    FBorderContentColorAndOpacityDelegate ContentColorAndOpacityDelegate;
    FLinearColor GetLinearColor();
    FMargin Padding;
    FSlateBrush Background;
    FBorderBackgroundDelegate BackgroundDelegate;
    FSlateBrush GetSlateBrush();
    FLinearColor BrushColor;
    FBorderBrushColorDelegate BrushColorDelegate;
    FLinearColor GetLinearColor();
    FVector2D DesiredSizeScale;
    bool bFlipForRightToLeftFlowDirection;
    FBorderOnMouseButtonDownEvent OnMouseButtonDownEvent;
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FBorderOnMouseButtonUpEvent OnMouseButtonUpEvent;
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FBorderOnMouseMoveEvent OnMouseMoveEvent;
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FBorderOnMouseDoubleClickEvent OnMouseDoubleClickEvent;
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetDesiredSizeScale(FVector2D InScale);
    void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
    void SetBrushFromTexture(class UTexture2D* Texture);
    void SetBrushFromMaterial(class UMaterialInterface* Material);
    void SetBrushFromAsset(class USlateBrushAsset* Asset);
    void SetBrushColor(FLinearColor InBrushColor);
    void SetBrush(const FSlateBrush& InBrush);
    class UMaterialInstanceDynamic* GetDynamicMaterial();
};

class UBorderSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UBrushBinding : public UPropertyBinding
{

    FSlateBrush GetValue();
};

class UButton : public UContentWidget
{
    class USlateWidgetStyleAsset* Style;
    FButtonStyle WidgetStyle;
    FLinearColor ColorAndOpacity;
    FLinearColor BackgroundColor;
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    bool IsFocusable;
    FButtonOnClicked OnClicked;
    void OnButtonClickedEvent();
    FButtonOnPressed OnPressed;
    void OnButtonPressedEvent();
    FButtonOnReleased OnReleased;
    void OnButtonReleasedEvent();
    FButtonOnHovered OnHovered;
    void OnButtonHoverEvent();
    FButtonOnUnhovered OnUnhovered;
    void OnButtonHoverEvent();

    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    void SetStyle(const FButtonStyle& InStyle);
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    void SetBackgroundColor(FLinearColor InBackgroundColor);
    bool IsPressed();
};

class UButtonSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UCanvasPanel : public UPanelWidget
{

    class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};

class UCanvasPanelSlot : public UPanelSlot
{
    FAnchorData LayoutData;
    bool bAutoSize;
    int32 ZOrder;

    void SetZOrder(int32 InZOrder);
    void SetSize(FVector2D InSize);
    void SetPosition(FVector2D InPosition);
    void SetOffsets(FMargin InOffset);
    void SetMinimum(FVector2D InMinimumAnchors);
    void SetMaximum(FVector2D InMaximumAnchors);
    void SetLayout(const FAnchorData& InLayoutData);
    void SetAutoSize(bool InbAutoSize);
    void SetAnchors(FAnchors InAnchors);
    void SetAlignment(FVector2D InAlignment);
    int32 GetZOrder();
    FVector2D GetSize();
    FVector2D GetPosition();
    FMargin GetOffsets();
    FAnchorData GetLayout();
    bool GetAutoSize();
    FAnchors GetAnchors();
    FVector2D GetAlignment();
};

class UCheckBox : public UContentWidget
{
    ECheckBoxState CheckedState;
    FCheckBoxCheckedStateDelegate CheckedStateDelegate;
    ECheckBoxState GetCheckBoxState();
    FCheckBoxStyle WidgetStyle;
    class USlateWidgetStyleAsset* Style;
    class USlateBrushAsset* UncheckedImage;
    class USlateBrushAsset* UncheckedHoveredImage;
    class USlateBrushAsset* UncheckedPressedImage;
    class USlateBrushAsset* CheckedImage;
    class USlateBrushAsset* CheckedHoveredImage;
    class USlateBrushAsset* CheckedPressedImage;
    class USlateBrushAsset* UndeterminedImage;
    class USlateBrushAsset* UndeterminedHoveredImage;
    class USlateBrushAsset* UndeterminedPressedImage;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    FMargin Padding;
    FSlateColor BorderBackgroundColor;
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    bool IsFocusable;
    FCheckBoxOnCheckStateChanged OnCheckStateChanged;
    void OnCheckBoxComponentStateChanged(bool bIsChecked);

    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    void SetIsChecked(bool InIsChecked);
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    void SetCheckedState(ECheckBoxState InCheckedState);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
};

class UCheckedStateBinding : public UPropertyBinding
{

    ECheckBoxState GetValue();
};

class UCircularThrobber : public UWidget
{
    int32 NumberOfPieces;
    float Period;
    float Radius;
    class USlateBrushAsset* PieceImage;
    FSlateBrush Image;
    bool bEnableRadius;

    void SetRadius(float InRadius);
    void SetPeriod(float InPeriod);
    void SetNumberOfPieces(int32 InNumberOfPieces);
};

class UColorBinding : public UPropertyBinding
{

    FSlateColor GetSlateValue();
    FLinearColor GetLinearValue();
};

class UComboBox : public UWidget
{
    TArray<class UObject*> Items;
    FComboBoxOnGenerateWidgetEvent OnGenerateWidgetEvent;
    class UWidget* GenerateWidgetForObject(class UObject* Item);
    bool bIsFocusable;

};

class UComboBoxString : public UWidget
{
    TArray<FString> DefaultOptions;
    FString SelectedOption;
    FComboBoxStyle WidgetStyle;
    FTableRowStyle ItemStyle;
    FMargin ContentPadding;
    float MaxListHeight;
    bool HasDownArrow;
    bool EnableGamepadNavigationMode;
    FSlateFontInfo Font;
    FSlateColor ForegroundColor;
    bool bIsFocusable;
    FComboBoxStringOnGenerateWidgetEvent OnGenerateWidgetEvent;
    class UWidget* GenerateWidgetForString(FString Item);
    FComboBoxStringOnSelectionChanged OnSelectionChanged;
    void OnSelectionChangedEvent(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    FComboBoxStringOnOpening OnOpening;
    void OnOpeningEvent();

    void SetSelectedOption(FString Option);
    void SetSelectedIndex(const int32 Index);
    bool RemoveOption(FString Option);
    void RefreshOptions();
    void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void OnOpeningEvent__DelegateSignature();
    bool IsOpen();
    FString GetSelectedOption();
    int32 GetSelectedIndex();
    int32 GetOptionCount();
    FString GetOptionAtIndex(int32 Index);
    int32 FindOptionIndex(FString Option);
    void ClearSelection();
    void ClearOptions();
    void AddOption(FString Option);
};

class UContentWidget : public UPanelWidget
{

    class UPanelSlot* SetContent(class UWidget* Content);
    class UPanelSlot* GetContentSlot();
    class UWidget* GetContent();
};

class UDefault__WidgetBlueprintGeneratedClass
{
};

class UDragDropOperation : public UObject
{
    FString Tag;
    class UObject* Payload;
    class UWidget* DefaultDragVisual;
    EDragPivot Pivot;
    FVector2D Offset;
    FDragDropOperationOnDrop OnDrop;
    void OnDragDropMulticast(class UDragDropOperation* Operation);
    FDragDropOperationOnDragCancelled OnDragCancelled;
    void OnDragDropMulticast(class UDragDropOperation* Operation);
    FDragDropOperationOnDragged OnDragged;
    void OnDragDropMulticast(class UDragDropOperation* Operation);

    void Drop(const FPointerEvent& PointerEvent);
    void Dragged(const FPointerEvent& PointerEvent);
    void DragCancelled(const FPointerEvent& PointerEvent);
};

class UDynamicEntryBox : public UDynamicEntryBoxBase
{
    TSubclassOf<class UUserWidget> EntryWidgetClass;

    void Reset(bool bDeleteWidgets);
    void RemoveEntry(class UUserWidget* EntryWidget);
    class UUserWidget* BP_CreateEntryOfClass(TSubclassOf<class UUserWidget> EntryClass);
    class UUserWidget* BP_CreateEntry();
};

class UDynamicEntryBoxBase : public UWidget
{
    EDynamicBoxType EntryBoxType;
    FVector2D EntrySpacing;
    TArray<FVector2D> SpacingPattern;
    FSlateChildSize EntrySizeRule;
    TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment;
    int32 MaxElementSize;
    FRadialBoxSettings RadialBoxSettings;
    FUserWidgetPool EntryWidgetPool;

    void SetRadialSettings(const FRadialBoxSettings& InSettings);
    void SetEntrySpacing(const FVector2D& InEntrySpacing);
    int32 GetNumEntries();
    TArray<class UUserWidget*> GetAllEntries();
};

class UEditableText : public UWidget
{
    FText Text;
    FEditableTextTextDelegate TextDelegate;
    FText GetText();
    FText HintText;
    FEditableTextHintTextDelegate HintTextDelegate;
    FText GetText();
    FEditableTextStyle WidgetStyle;
    class USlateWidgetStyleAsset* Style;
    class USlateBrushAsset* BackgroundImageSelected;
    class USlateBrushAsset* BackgroundImageComposing;
    class USlateBrushAsset* CaretImage;
    FSlateFontInfo Font;
    FSlateColor ColorAndOpacity;
    bool IsReadOnly;
    bool IsPassword;
    float MinimumDesiredWidth;
    bool IsCaretMovedWhenGainFocus;
    bool SelectAllTextWhenFocused;
    bool RevertTextOnEscape;
    bool ClearKeyboardFocusOnCommit;
    bool SelectAllTextOnCommit;
    bool AllowContextMenu;
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    TEnumAsByte<ETextJustify::Type> Justification;
    FShapedTextOptions ShapedTextOptions;
    FEditableTextOnTextChanged OnTextChanged;
    void OnEditableTextChangedEvent(const FText& Text);
    FEditableTextOnTextCommitted OnTextCommitted;
    void OnEditableTextCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);

    void SetText(FText InText);
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    void SetIsReadOnly(bool InbIsReadyOnly);
    void SetIsPassword(bool InbIsPassword);
    void SetHintText(FText InHintText);
    void OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
};

class UEditableTextBox : public UWidget
{
    FText Text;
    FEditableTextBoxTextDelegate TextDelegate;
    FText GetText();
    FEditableTextBoxStyle WidgetStyle;
    class USlateWidgetStyleAsset* Style;
    FText HintText;
    FEditableTextBoxHintTextDelegate HintTextDelegate;
    FText GetText();
    FSlateFontInfo Font;
    FLinearColor ForegroundColor;
    FLinearColor BackgroundColor;
    FLinearColor ReadOnlyForegroundColor;
    bool IsReadOnly;
    bool IsPassword;
    float MinimumDesiredWidth;
    FMargin Padding;
    bool IsCaretMovedWhenGainFocus;
    bool SelectAllTextWhenFocused;
    bool RevertTextOnEscape;
    bool ClearKeyboardFocusOnCommit;
    bool SelectAllTextOnCommit;
    bool AllowContextMenu;
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    TEnumAsByte<ETextJustify::Type> Justification;
    FShapedTextOptions ShapedTextOptions;
    FEditableTextBoxOnTextChanged OnTextChanged;
    void OnEditableTextBoxChangedEvent(const FText& Text);
    FEditableTextBoxOnTextCommitted OnTextCommitted;
    void OnEditableTextBoxCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);

    void SetText(FText InText);
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    void SetIsReadOnly(bool bReadOnly);
    void SetIsPassword(bool bIsPassword);
    void SetHintText(FText InText);
    void SetError(FText InError);
    void OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    bool HasError();
    FText GetText();
    void ClearError();
};

class UExpandableArea : public UWidget
{
    FExpandableAreaStyle Style;
    FSlateBrush BorderBrush;
    FSlateColor BorderColor;
    bool bIsExpanded;
    float MaxHeight;
    FMargin HeaderPadding;
    FMargin AreaPadding;
    FExpandableAreaOnExpansionChanged OnExpansionChanged;
    void OnExpandableAreaExpansionChanged(class UExpandableArea* Area, bool bIsExpanded);
    class UWidget* HeaderContent;
    class UWidget* BodyContent;

    void SetIsExpanded_Animated(bool IsExpanded);
    void SetIsExpanded(bool IsExpanded);
    bool GetIsExpanded();
};

class UFloatBinding : public UPropertyBinding
{

    float GetValue();
};

class UGridPanel : public UPanelWidget
{
    TArray<float> ColumnFill;
    TArray<float> RowFill;

    void SetRowFill(int32 ColumnIndex, float Coefficient);
    void SetColumnFill(int32 ColumnIndex, float Coefficient);
    class UGridSlot* AddChildToGrid(class UWidget* Content, int32 InRow, int32 InColumn);
};

class UGridSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    int32 Row;
    int32 RowSpan;
    int32 Column;
    int32 ColumnSpan;
    int32 Layer;
    FVector2D Nudge;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetRowSpan(int32 InRowSpan);
    void SetRow(int32 InRow);
    void SetPadding(FMargin InPadding);
    void SetNudge(FVector2D InNudge);
    void SetLayer(int32 InLayer);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetColumnSpan(int32 InColumnSpan);
    void SetColumn(int32 InColumn);
};

class UHorizontalBox : public UPanelWidget
{

    class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};

class UHorizontalBoxSlot : public UPanelSlot
{
    FMargin Padding;
    FSlateChildSize Size;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetSize(FSlateChildSize InSize);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UImage : public UWidget
{
    FSlateBrush Brush;
    FImageBrushDelegate BrushDelegate;
    FSlateBrush GetSlateBrush();
    FLinearColor ColorAndOpacity;
    FImageColorAndOpacityDelegate ColorAndOpacityDelegate;
    FLinearColor GetLinearColor();
    bool bFlipForRightToLeftFlowDirection;
    FImageOnMouseButtonDownEvent OnMouseButtonDownEvent;
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);

    void SetOpacity(float InOpacity);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetBrushTintColor(FSlateColor TintColor);
    void SetBrushSize(FVector2D DesiredSize);
    void SetBrushResourceObject(class UObject* ResourceObject);
    void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
    void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
    void SetBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize);
    void SetBrushFromSoftMaterial(TSoftObjectPtr<UMaterialInterface> SoftMaterial);
    void SetBrushFromMaterial(class UMaterialInterface* Material);
    void SetBrushFromAtlasInterface(TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);
    void SetBrushFromAsset(class USlateBrushAsset* Asset);
    void SetBrush(const FSlateBrush& InBrush);
    class UMaterialInstanceDynamic* GetDynamicMaterial();
};

class UInputKeySelector : public UWidget
{
    FButtonStyle WidgetStyle;
    FTextBlockStyle TextStyle;
    FInputChord SelectedKey;
    FSlateFontInfo Font;
    FMargin Margin;
    FLinearColor ColorAndOpacity;
    FText KeySelectionText;
    FText NoKeySpecifiedText;
    bool bAllowModifierKeys;
    bool bAllowGamepadKeys;
    TArray<FKey> EscapeKeys;
    FInputKeySelectorOnKeySelected OnKeySelected;
    void OnKeySelected(FInputChord SelectedKey);
    FInputKeySelectorOnIsSelectingKeyChanged OnIsSelectingKeyChanged;
    void OnIsSelectingKeyChanged();

    void SetTextBlockVisibility(const ESlateVisibility InVisibility);
    void SetSelectedKey(const FInputChord& InSelectedKey);
    void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);
    void SetKeySelectionText(FText InKeySelectionText);
    void SetEscapeKeys(const TArray<FKey>& InKeys);
    void SetAllowModifierKeys(bool bInAllowModifierKeys);
    void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
    void OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void OnIsSelectingKeyChanged__DelegateSignature();
    bool GetIsSelectingKey();
};

class UInt32Binding : public UPropertyBinding
{

    int32 GetValue();
};

class UInvalidationBox : public UContentWidget
{
    bool bCanCache;
    bool CacheRelativeTransforms;

    void SetCanCache(bool CanCache);
    void InvalidateCache();
    bool GetCanCache();
};

class UListView : public UListViewBase
{
    TEnumAsByte<EOrientation> Orientation;
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    EConsumeMouseWheel ConsumeMouseWheel;
    bool bClearSelectionOnClick;
    bool bIsFocusable;
    float EntrySpacing;
    bool bReturnFocusToSelection;
    TArray<class UObject*> ListItems;
    FListViewBP_OnEntryInitialized BP_OnEntryInitialized;
    void OnListEntryInitializedDynamic(class UObject* Item, class UUserWidget* Widget);
    FListViewBP_OnItemClicked BP_OnItemClicked;
    void SimpleListItemEventDynamic(class UObject* Item);
    FListViewBP_OnItemDoubleClicked BP_OnItemDoubleClicked;
    void SimpleListItemEventDynamic(class UObject* Item);
    FListViewBP_OnItemIsHoveredChanged BP_OnItemIsHoveredChanged;
    void OnItemIsHoveredChangedDynamic(class UObject* Item, bool bIsHovered);
    FListViewBP_OnItemSelectionChanged BP_OnItemSelectionChanged;
    void OnListItemSelectionChangedDynamic(class UObject* Item, bool bIsSelected);
    FListViewBP_OnItemScrolledIntoView BP_OnItemScrolledIntoView;
    void OnListItemScrolledIntoViewDynamic(class UObject* Item, class UUserWidget* Widget);

    void SetSelectionMode(TEnumAsByte<ESelectionMode::Type> SelectionMode);
    void SetSelectedIndex(int32 Index);
    void ScrollIndexIntoView(int32 Index);
    void RemoveItem(class UObject* Item);
    void NavigateToIndex(int32 Index);
    bool IsRefreshPending();
    int32 GetNumItems();
    TArray<class UObject*> GetListItems();
    class UObject* GetItemAt(int32 Index);
    int32 GetIndexForItem(class UObject* Item);
    void ClearListItems();
    void BP_SetSelectedItem(class UObject* Item);
    void BP_SetListItems(const TArray<class UObject*>& InListItems);
    void BP_SetItemSelection(class UObject* Item, bool bSelected);
    void BP_ScrollItemIntoView(class UObject* Item);
    void BP_NavigateToItem(class UObject* Item);
    bool BP_IsItemVisible(class UObject* Item);
    bool BP_GetSelectedItems(TArray<class UObject*>& Items);
    class UObject* BP_GetSelectedItem();
    int32 BP_GetNumItemsSelected();
    void BP_ClearSelection();
    void BP_CancelScrollIntoView();
    void AddItem(class UObject* Item);
};

class UListViewBase : public UWidget
{
    TSubclassOf<class UUserWidget> EntryWidgetClass;
    float WheelScrollMultiplier;
    bool bEnableScrollAnimation;
    bool bEnableFixedLineOffset;
    float FixedLineScrollOffset;
    FListViewBaseBP_OnEntryGenerated BP_OnEntryGenerated;
    void OnListEntryGeneratedDynamic(class UUserWidget* Widget);
    FListViewBaseBP_OnEntryReleased BP_OnEntryReleased;
    void OnListEntryReleasedDynamic(class UUserWidget* Widget);
    FUserWidgetPool EntryWidgetPool;

    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    void SetScrollOffset(const float InScrollOffset);
    void SetScrollbarVisibility(ESlateVisibility InVisibility);
    void ScrollToTop();
    void ScrollToBottom();
    void RequestRefresh();
    void RegenerateAllEntries();
    TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};

class UListViewDesignerPreviewItem : public UObject
{
};

class UMenuAnchor : public UContentWidget
{
    TSubclassOf<class UUserWidget> MenuClass;
    FMenuAnchorOnGetMenuContentEvent OnGetMenuContentEvent;
    class UWidget* GetWidget();
    FMenuAnchorOnGetUserMenuContentEvent OnGetUserMenuContentEvent;
    class UUserWidget* GetUserWidget();
    TEnumAsByte<EMenuPlacement> Placement;
    bool bFitInWindow;
    bool ShouldDeferPaintingAfterWindowContent;
    bool UseApplicationMenuStack;
    FMenuAnchorOnMenuOpenChanged OnMenuOpenChanged;
    void OnMenuOpenChangedEvent(bool bIsOpen);

    void ToggleOpen(bool bFocusOnOpen);
    bool ShouldOpenDueToClick();
    void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);
    void Open(bool bFocusMenu);
    bool IsOpen();
    bool HasOpenSubMenus();
    class UUserWidget* GetUserWidget__DelegateSignature();
    FVector2D GetMenuPosition();
    void FitInWindow(bool bFit);
    void Close();
};

class UMouseCursorBinding : public UPropertyBinding
{

    TEnumAsByte<EMouseCursor::Type> GetValue();
};

class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieScene2DTransformSection : public UMovieSceneSection
{
    FMovieScene2DTransformMask TransformMask;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;
    FMovieSceneFloatChannel Shear;

};

class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneMarginSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel TopCurve;
    FMovieSceneFloatChannel LeftCurve;
    FMovieSceneFloatChannel RightCurve;
    FMovieSceneFloatChannel BottomCurve;

};

class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
    TArray<FName> BrushPropertyNamePath;
    FName TrackName;

};

class UMultiLineEditableText : public UTextLayoutWidget
{
    FText Text;
    FText HintText;
    FMultiLineEditableTextHintTextDelegate HintTextDelegate;
    FText GetText();
    FTextBlockStyle WidgetStyle;
    bool bIsReadOnly;
    FSlateFontInfo Font;
    bool SelectAllTextWhenFocused;
    bool ClearTextSelectionOnFocusLoss;
    bool RevertTextOnEscape;
    bool ClearKeyboardFocusOnCommit;
    bool AllowContextMenu;
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    FMultiLineEditableTextOnTextChanged OnTextChanged;
    void OnMultiLineEditableTextChangedEvent(const FText& Text);
    FMultiLineEditableTextOnTextCommitted OnTextCommitted;
    void OnMultiLineEditableTextCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);

    void SetWidgetStyle(const FTextBlockStyle& InWidgetStyle);
    void SetText(FText InText);
    void SetIsReadOnly(bool bReadOnly);
    void SetHintText(FText InHintText);
    void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnMultiLineEditableTextChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
    FText GetHintText();
};

class UMultiLineEditableTextBox : public UTextLayoutWidget
{
    FText Text;
    FText HintText;
    FMultiLineEditableTextBoxHintTextDelegate HintTextDelegate;
    FText GetText();
    FEditableTextBoxStyle WidgetStyle;
    FTextBlockStyle TextStyle;
    bool bIsReadOnly;
    bool AllowContextMenu;
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    class USlateWidgetStyleAsset* Style;
    FSlateFontInfo Font;
    FLinearColor ForegroundColor;
    FLinearColor BackgroundColor;
    FLinearColor ReadOnlyForegroundColor;
    FMultiLineEditableTextBoxOnTextChanged OnTextChanged;
    void OnMultiLineEditableTextBoxChangedEvent(const FText& Text);
    FMultiLineEditableTextBoxOnTextCommitted OnTextCommitted;
    void OnMultiLineEditableTextBoxCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);

    void SetTextStyle(const FTextBlockStyle& InTextStyle);
    void SetText(FText InText);
    void SetIsReadOnly(bool bReadOnly);
    void SetHintText(FText InHintText);
    void SetError(FText InError);
    void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
    FText GetHintText();
};

class UNamedSlot : public UContentWidget
{
};

class UNativeWidgetHost : public UWidget
{
};

class UOverlay : public UPanelWidget
{

    class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};

class UOverlaySlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UPanelSlot : public UVisual
{
    class UPanelWidget* Parent;
    class UWidget* Content;

};

class UPanelWidget : public UWidget
{
    TArray<class UPanelSlot*> Slots;

    bool RemoveChildAt(int32 Index);
    bool RemoveChild(class UWidget* Content);
    bool HasChild(class UWidget* Content);
    bool HasAnyChildren();
    int32 GetChildrenCount();
    int32 GetChildIndex(const class UWidget* Content);
    class UWidget* GetChildAt(int32 Index);
    TArray<class UWidget*> GetAllChildren();
    void ClearChildren();
    class UPanelSlot* AddChild(class UWidget* Content);
};

class UProgressBar : public UWidget
{
    FProgressBarStyle WidgetStyle;
    class USlateWidgetStyleAsset* Style;
    class USlateBrushAsset* BackgroundImage;
    class USlateBrushAsset* FillImage;
    class USlateBrushAsset* MarqueeImage;
    float Percent;
    TEnumAsByte<EProgressBarFillType::Type> BarFillType;
    bool bIsMarquee;
    FVector2D BorderPadding;
    FProgressBarPercentDelegate PercentDelegate;
    float GetFloat();
    FLinearColor FillColorAndOpacity;
    FProgressBarFillColorAndOpacityDelegate FillColorAndOpacityDelegate;
    FLinearColor GetLinearColor();

    void SetPercent(float InPercent);
    void SetIsMarquee(bool InbIsMarquee);
    void SetFillColorAndOpacity(FLinearColor InColor);
};

class UPropertyBinding : public UObject
{
    TWeakObjectPtr<class UObject> SourceObject;
    FDynamicPropertyPath SourcePath;
    FName DestinationProperty;

};

class URetainerBox : public UContentWidget
{
    bool bRetainRender;
    bool RenderOnInvalidation;
    bool RenderOnPhase;
    int32 Phase;
    int32 PhaseCount;
    class UMaterialInterface* EffectMaterial;
    FName TextureParameter;

    void SetTextureParameter(FName TextureParameter);
    void SetRetainRendering(bool bInRetainRendering);
    void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);
    void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
    void RequestRender();
    class UMaterialInstanceDynamic* GetEffectMaterial();
};

class URichTextBlock : public UTextLayoutWidget
{
    FText Text;
    class UDataTable* TextStyleSet;
    TArray<class TSubclassOf<URichTextBlockDecorator>> DecoratorClasses;
    bool bOverrideDefaultStyle;
    FTextBlockStyle DefaultTextStyleOverride;
    float MinDesiredWidth;
    ETextTransformPolicy TextTransformPolicy;
    FTextBlockStyle DefaultTextStyle;
    TArray<class URichTextBlockDecorator*> InstanceDecorators;

    void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
    void SetTextStyleSet(class UDataTable* NewTextStyleSet);
    void SetText(const FText& InText);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetDefaultTextStyle(const FTextBlockStyle& InDefaultTextStyle);
    void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);
    void SetDefaultShadowOffset(FVector2D InShadowOffset);
    void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    void SetDefaultFont(FSlateFontInfo InFontInfo);
    void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetAutoWrapText(bool InAutoTextWrap);
    FText GetText();
    class URichTextBlockDecorator* GetDecoratorByClass(TSubclassOf<class URichTextBlockDecorator> DecoratorClass);
    void ClearAllDefaultStyleOverrides();
};

class URichTextBlockDecorator : public UObject
{
};

class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
    class UDataTable* ImageSet;

};

class USafeZone : public UContentWidget
{
    bool PadLeft;
    bool PadRight;
    bool PadTop;
    bool PadBottom;

    void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

class USafeZoneSlot : public UPanelSlot
{
    bool bIsTitleSafe;
    FMargin SafeAreaScale;
    TEnumAsByte<EHorizontalAlignment> HAlign;
    TEnumAsByte<EVerticalAlignment> VAlign;
    FMargin Padding;

};

class UScaleBox : public UContentWidget
{
    TEnumAsByte<EStretch::Type> Stretch;
    TEnumAsByte<EStretchDirection::Type> StretchDirection;
    float UserSpecifiedScale;
    bool IgnoreInheritedScale;

    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    void SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection);
    void SetStretch(TEnumAsByte<EStretch::Type> InStretch);
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

class UScaleBoxSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UScrollBar : public UWidget
{
    FScrollBarStyle WidgetStyle;
    class USlateWidgetStyleAsset* Style;
    bool bAlwaysShowScrollbar;
    bool bAlwaysShowScrollbarTrack;
    TEnumAsByte<EOrientation> Orientation;
    FVector2D Thickness;
    FMargin Padding;

    void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

class UScrollBox : public UPanelWidget
{
    FScrollBoxStyle WidgetStyle;
    FScrollBarStyle WidgetBarStyle;
    class USlateWidgetStyleAsset* Style;
    class USlateWidgetStyleAsset* BarStyle;
    TEnumAsByte<EOrientation> Orientation;
    ESlateVisibility ScrollBarVisibility;
    EConsumeMouseWheel ConsumeMouseWheel;
    FVector2D ScrollbarThickness;
    FMargin ScrollbarPadding;
    bool AlwaysShowScrollbar;
    bool AlwaysShowScrollbarTrack;
    bool AllowOverscroll;
    bool bAnimateWheelScrolling;
    EDescendantScrollDestination NavigationDestination;
    float NavigationScrollPadding;
    EScrollWhenFocusChanges ScrollWhenFocusChanges;
    bool bAllowRightClickDragScrolling;
    float WheelScrollMultiplier;
    FScrollBoxOnUserScrolled OnUserScrolled;
    void OnUserScrolledEvent(float CurrentOffset);

    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);
    void SetScrollOffset(float NewScrollOffset);
    void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);
    void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
    void SetScrollbarPadding(const FMargin& NewScrollbarPadding);
    void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
    void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
    void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    void SetAllowOverscroll(bool NewAllowOverscroll);
    void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
    void ScrollToStart();
    void ScrollToEnd();
    float GetViewOffsetFraction();
    float GetScrollOffsetOfEnd();
    float GetScrollOffset();
    void EndInertialScrolling();
};

class UScrollBoxSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class USizeBox : public UContentWidget
{
    float WidthOverride;
    float HeightOverride;
    float MinDesiredWidth;
    float MinDesiredHeight;
    float MaxDesiredWidth;
    float MaxDesiredHeight;
    float MinAspectRatio;
    float MaxAspectRatio;
    uint8 bOverride_WidthOverride;
    uint8 bOverride_HeightOverride;
    uint8 bOverride_MinDesiredWidth;
    uint8 bOverride_MinDesiredHeight;
    uint8 bOverride_MaxDesiredWidth;
    uint8 bOverride_MaxDesiredHeight;
    uint8 bOverride_MinAspectRatio;
    uint8 bOverride_MaxAspectRatio;

    void SetWidthOverride(float InWidthOverride);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetMinDesiredHeight(float InMinDesiredHeight);
    void SetMinAspectRatio(float InMinAspectRatio);
    void SetMaxDesiredWidth(float InMaxDesiredWidth);
    void SetMaxDesiredHeight(float InMaxDesiredHeight);
    void SetMaxAspectRatio(float InMaxAspectRatio);
    void SetHeightOverride(float InHeightOverride);
    void ClearWidthOverride();
    void ClearMinDesiredWidth();
    void ClearMinDesiredHeight();
    void ClearMinAspectRatio();
    void ClearMaxDesiredWidth();
    void ClearMaxDesiredHeight();
    void ClearMaxAspectRatio();
    void ClearHeightOverride();
};

class USizeBoxSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class USlateAccessibleWidgetData : public UObject
{
    bool bCanChildrenBeAccessible;
    ESlateAccessibleBehavior AccessibleBehavior;
    ESlateAccessibleBehavior AccessibleSummaryBehavior;
    FText AccessibleText;
    FSlateAccessibleWidgetDataAccessibleTextDelegate AccessibleTextDelegate;
    FText GetText();
    FText AccessibleSummaryText;
    FSlateAccessibleWidgetDataAccessibleSummaryTextDelegate AccessibleSummaryTextDelegate;
    FText GetText();

};

class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FVector2D TransformVectorLocalToAbsolute(const FGeometry& Geometry, FVector2D LocalVector);
    FVector2D TransformVectorAbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteVector);
    float TransformScalarLocalToAbsolute(const FGeometry& Geometry, float LocalScalar);
    float TransformScalarAbsoluteToLocal(const FGeometry& Geometry, float AbsoluteScalar);
    void ScreenToWidgetLocal(class UObject* WorldContextObject, const FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition);
    void ScreenToWidgetAbsolute(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition);
    void ScreenToViewport(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);
    void LocalToViewport(class UObject* WorldContextObject, const FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    FVector2D LocalToAbsolute(const FGeometry& Geometry, FVector2D LocalCoordinate);
    bool IsUnderLocation(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate);
    FVector2D GetLocalTopLeft(const FGeometry& Geometry);
    FVector2D GetLocalSize(const FGeometry& Geometry);
    FVector2D GetAbsoluteSize(const FGeometry& Geometry);
    bool EqualEqual_SlateBrush(const FSlateBrush& A, const FSlateBrush& B);
    void AbsoluteToViewport(class UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    FVector2D AbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteCoordinate);
};

class USlateVectorArtData : public UObject
{
    TArray<FSlateMeshVertex> VertexData;
    TArray<uint32> IndexData;
    class UMaterialInterface* Material;
    FVector2D ExtentMin;
    FVector2D ExtentMax;

};

class USlider : public UWidget
{
    float Value;
    FSliderValueDelegate ValueDelegate;
    float GetFloat();
    float MinValue;
    float MaxValue;
    FSliderStyle WidgetStyle;
    TEnumAsByte<EOrientation> Orientation;
    FLinearColor SliderBarColor;
    FLinearColor SliderHandleColor;
    bool IndentHandle;
    bool Locked;
    bool MouseUsesStep;
    bool RequiresControllerLock;
    float StepSize;
    bool IsFocusable;
    FSliderOnMouseCaptureBegin OnMouseCaptureBegin;
    void OnMouseCaptureBeginEvent();
    FSliderOnMouseCaptureEnd OnMouseCaptureEnd;
    void OnMouseCaptureEndEvent();
    FSliderOnControllerCaptureBegin OnControllerCaptureBegin;
    void OnControllerCaptureBeginEvent();
    FSliderOnControllerCaptureEnd OnControllerCaptureEnd;
    void OnControllerCaptureEndEvent();
    FSliderOnValueChanged OnValueChanged;
    void OnFloatValueChangedEvent(float Value);

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetMinValue(float InValue);
    void SetMaxValue(float InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    float GetValue();
    float GetNormalizedValue();
};

class USpacer : public UWidget
{
    FVector2D Size;

    void SetSize(FVector2D InSize);
};

class USpinBox : public UWidget
{
    float Value;
    FSpinBoxValueDelegate ValueDelegate;
    float GetFloat();
    FSpinBoxStyle WidgetStyle;
    class USlateWidgetStyleAsset* Style;
    int32 MinFractionalDigits;
    int32 MaxFractionalDigits;
    bool bAlwaysUsesDeltaSnap;
    float Delta;
    float SliderExponent;
    FSlateFontInfo Font;
    TEnumAsByte<ETextJustify::Type> Justification;
    float MinDesiredWidth;
    bool ClearKeyboardFocusOnCommit;
    bool SelectAllTextOnCommit;
    FSlateColor ForegroundColor;
    FSpinBoxOnValueChanged OnValueChanged;
    void OnSpinBoxValueChangedEvent(float InValue);
    FSpinBoxOnValueCommitted OnValueCommitted;
    void OnSpinBoxValueCommittedEvent(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    FSpinBoxOnBeginSliderMovement OnBeginSliderMovement;
    void OnSpinBoxBeginSliderMovement();
    FSpinBoxOnEndSliderMovement OnEndSliderMovement;
    void OnSpinBoxValueChangedEvent(float InValue);
    uint8 bOverride_MinValue;
    uint8 bOverride_MaxValue;
    uint8 bOverride_MinSliderValue;
    uint8 bOverride_MaxSliderValue;
    float MinValue;
    float MaxValue;
    float MinSliderValue;
    float MaxSliderValue;

    void SetValue(float NewValue);
    void SetMinValue(float NewValue);
    void SetMinSliderValue(float NewValue);
    void SetMinFractionalDigits(int32 NewValue);
    void SetMaxValue(float NewValue);
    void SetMaxSliderValue(float NewValue);
    void SetMaxFractionalDigits(int32 NewValue);
    void SetForegroundColor(FSlateColor InForegroundColor);
    void SetDelta(float NewValue);
    void SetAlwaysUsesDeltaSnap(bool bNewValue);
    void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void OnSpinBoxBeginSliderMovement__DelegateSignature();
    float GetValue();
    float GetMinValue();
    float GetMinSliderValue();
    int32 GetMinFractionalDigits();
    float GetMaxValue();
    float GetMaxSliderValue();
    int32 GetMaxFractionalDigits();
    float GetDelta();
    bool GetAlwaysUsesDeltaSnap();
    void ClearMinValue();
    void ClearMinSliderValue();
    void ClearMaxValue();
    void ClearMaxSliderValue();
};

class UTextBinding : public UPropertyBinding
{

    FText GetTextValue();
    FString GetStringValue();
};

class UTextBlock : public UTextLayoutWidget
{
    FText Text;
    FTextBlockTextDelegate TextDelegate;
    FText GetText();
    FSlateColor ColorAndOpacity;
    FTextBlockColorAndOpacityDelegate ColorAndOpacityDelegate;
    FSlateColor GetSlateColor();
    FSlateFontInfo Font;
    FSlateBrush StrikeBrush;
    FVector2D ShadowOffset;
    FLinearColor ShadowColorAndOpacity;
    FTextBlockShadowColorAndOpacityDelegate ShadowColorAndOpacityDelegate;
    FLinearColor GetLinearColor();
    float MinDesiredWidth;
    bool bWrapWithInvalidationPanel;
    bool bAutoWrapText;
    ETextTransformPolicy TextTransformPolicy;
    bool bSimpleTextMode;

    void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
    void SetText(FText InText);
    void SetStrikeBrush(FSlateBrush InStrikeBrush);
    void SetShadowOffset(FVector2D InShadowOffset);
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    void SetOpacity(float InOpacity);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetFont(FSlateFontInfo InFontInfo);
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetAutoWrapText(bool InAutoTextWrap);
    FText GetText();
    class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
    class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

class UTextLayoutWidget : public UWidget
{
    FShapedTextOptions ShapedTextOptions;
    TEnumAsByte<ETextJustify::Type> Justification;
    ETextWrappingPolicy WrappingPolicy;
    uint8 AutoWrapText;
    float WrapTextAt;
    FMargin Margin;
    float LineHeightPercentage;

    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
};

class UThrobber : public UWidget
{
    int32 NumberOfPieces;
    bool bAnimateHorizontally;
    bool bAnimateVertically;
    bool bAnimateOpacity;
    class USlateBrushAsset* PieceImage;
    FSlateBrush Image;

    void SetNumberOfPieces(int32 InNumberOfPieces);
    void SetAnimateVertically(bool bInAnimateVertically);
    void SetAnimateOpacity(bool bInAnimateOpacity);
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

class UTileView : public UListView
{
    float EntryHeight;
    float EntryWidth;
    EListItemAlignment TileAlignment;
    bool bWrapHorizontalNavigation;

    void SetEntryWidth(float NewWidth);
    void SetEntryHeight(float NewHeight);
    float GetEntryWidth();
    float GetEntryHeight();
};

class UTreeView : public UListView
{
    FTreeViewBP_OnGetItemChildren BP_OnGetItemChildren;
    void OnGetItemChildrenDynamic(class UObject* Item, TArray<class UObject*>& Children);
    FTreeViewBP_OnItemExpansionChanged BP_OnItemExpansionChanged;
    void OnItemExpansionChangedDynamic(class UObject* Item, bool bIsExpanded);

    void SetItemExpansion(class UObject* Item, bool bExpandItem);
    void ExpandAll();
    void CollapseAll();
};

class UUMGSequencePlayer : public UObject
{
    class UWidgetAnimation* Animation;
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;

    void SetUserTag(FName InUserTag);
    FName GetUserTag();
};

class UUMGSequenceTickManager : public UObject
{
    TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets;
    class UMovieSceneEntitySystemLinker* Linker;

};

class UUniformGridPanel : public UPanelWidget
{
    FMargin SlotPadding;
    float MinDesiredSlotWidth;
    float MinDesiredSlotHeight;

    void SetSlotPadding(FMargin InSlotPadding);
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32 InRow, int32 InColumn);
};

class UUniformGridSlot : public UPanelSlot
{
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    int32 Row;
    int32 Column;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetRow(int32 InRow);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetColumn(int32 InColumn);
};

class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{

    bool IsListItemSelected(TScriptInterface<class IUserListEntry> UserListEntry);
    bool IsListItemExpanded(TScriptInterface<class IUserListEntry> UserListEntry);
    class UListViewBase* GetOwningListView(TScriptInterface<class IUserListEntry> UserListEntry);
};

class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{

    class UObject* GetListItemObject(TScriptInterface<class IUserObjectListEntry> UserObjectListEntry);
};

class UUserWidget : public UWidget
{
    FLinearColor ColorAndOpacity;
    FUserWidgetColorAndOpacityDelegate ColorAndOpacityDelegate;
    FLinearColor GetLinearColor();
    FSlateColor ForegroundColor;
    FUserWidgetForegroundColorDelegate ForegroundColorDelegate;
    FSlateColor GetSlateColor();
    FUserWidgetOnVisibilityChanged OnVisibilityChanged;
    void OnVisibilityChangedEvent(ESlateVisibility InVisibility);
    FMargin Padding;
    TArray<class UUMGSequencePlayer*> ActiveSequencePlayers;
    class UUMGSequenceTickManager* AnimationTickManager;
    TArray<class UUMGSequencePlayer*> StoppedSequencePlayers;
    TArray<FNamedSlotBinding> NamedSlotBindings;
    class UWidgetTree* WidgetTree;
    int32 Priority;
    uint8 bSupportsKeyboardFocus;
    uint8 bIsFocusable;
    uint8 bStopAction;
    uint8 bHasScriptImplementedTick;
    uint8 bHasScriptImplementedPaint;
    EWidgetTickFrequency TickFrequency;
    class UInputComponent* InputComponent;
    TArray<FAnimationEventBinding> AnimationCallbacks;

    void UnregisterInputComponent();
    void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FUnbindFromAnimationStartedDelegate Delegate);
    void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FUnbindFromAnimationFinishedDelegate Delegate);
    void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
    void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);
    void StopListeningForAllInputActions();
    void StopAnimationsAndLatentActions();
    void StopAnimation(const class UWidgetAnimation* InAnimation);
    void StopAllAnimations();
    void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);
    void SetPlaybackSpeed(const class UWidgetAnimation* InAnimation, float PlaybackSpeed);
    void SetPadding(FMargin InPadding);
    void SetOwningPlayer(class APlayerController* LocalPlayerController);
    void SetNumLoopsToPlay(const class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
    void SetInputActionPriority(int32 NewPriority);
    void SetInputActionBlocking(bool bShouldBlock);
    void SetForegroundColor(FSlateColor InForegroundColor);
    void SetDesiredSizeInViewport(FVector2D Size);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetAnimationCurrentTime(const class UWidgetAnimation* InAnimation, float InTime);
    void SetAnchorsInViewport(FAnchors Anchors);
    void SetAlignmentInViewport(FVector2D Alignment);
    void ReverseAnimation(const class UWidgetAnimation* InAnimation);
    void RemoveFromViewport();
    void RegisterInputComponent();
    void PreConstruct(bool IsDesignTime);
    void PlaySound(class USoundBase* SoundToPlay);
    class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState);
    class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState);
    float PauseAnimation(const class UWidgetAnimation* InAnimation);
    FEventReply OnTouchStarted(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    FEventReply OnTouchMoved(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    FEventReply OnTouchGesture(FGeometry MyGeometry, const FPointerEvent& GestureEvent);
    FEventReply OnTouchForceChanged(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    FEventReply OnTouchEnded(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnPaint(FPaintContext& Context);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseCaptureLost();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);
    void OnInitialized();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void OnAnimationStarted(const class UWidgetAnimation* Animation);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FListenForInputActionCallback Callback);
    bool IsPlayingAnimation();
    bool IsListeningForInputAction(FName ActionName);
    bool IsInViewport();
    bool IsInteractable();
    bool IsAnyAnimationPlaying();
    bool IsAnimationPlayingForward(const class UWidgetAnimation* InAnimation);
    bool IsAnimationPlaying(const class UWidgetAnimation* InAnimation);
    class APawn* GetOwningPlayerPawn();
    class APlayerCameraManager* GetOwningPlayerCameraManager();
    bool GetIsVisible();
    float GetAnimationCurrentTime(const class UWidgetAnimation* InAnimation);
    FAnchors GetAnchorsInViewport();
    FVector2D GetAlignmentInViewport();
    void FlushAnimations();
    void Destruct();
    void Construct();
    void CancelLatentActions();
    void BindToAnimationStarted(class UWidgetAnimation* Animation, FBindToAnimationStartedDelegate Delegate);
    void BindToAnimationFinished(class UWidgetAnimation* Animation, FBindToAnimationFinishedDelegate Delegate);
    void BindToAnimationEvent(class UWidgetAnimation* Animation, FBindToAnimationEventDelegate Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag);
    void AddToViewport(int32 ZOrder);
    bool AddToPlayerScreen(int32 ZOrder);
};

class UVerticalBox : public UPanelWidget
{

    class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};

class UVerticalBoxSlot : public UPanelSlot
{
    FSlateChildSize Size;
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetSize(FSlateChildSize InSize);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UViewport : public UContentWidget
{
    FLinearColor BackgroundColor;

    class AActor* Spawn(TSubclassOf<class AActor> ActorClass);
    void SetViewRotation(FRotator Rotation);
    void SetViewLocation(FVector Location);
    FRotator GetViewRotation();
    class UWorld* GetViewportWorld();
    FVector GetViewLocation();
};

class UVisibilityBinding : public UPropertyBinding
{

    ESlateVisibility GetValue();
};

class UVisual : public UObject
{
};

class UWidget : public UVisual
{
    class UPanelSlot* Slot;
    FWidgetBIsEnabledDelegate bIsEnabledDelegate;
    bool GetBool();
    FText ToolTipText;
    FWidgetToolTipTextDelegate ToolTipTextDelegate;
    FText GetText();
    class UWidget* ToolTipWidget;
    FWidgetToolTipWidgetDelegate ToolTipWidgetDelegate;
    class UWidget* GetWidget();
    FWidgetVisibilityDelegate VisibilityDelegate;
    ESlateVisibility GetSlateVisibility();
    FWidgetTransform RenderTransform;
    FVector2D RenderTransformPivot;
    uint8 bIsVariable;
    uint8 bCreatedByConstructionScript;
    uint8 bIsEnabled;
    uint8 bOverride_Cursor;
    class USlateAccessibleWidgetData* AccessibleWidgetData;
    uint8 bIsVolatile;
    TEnumAsByte<EMouseCursor::Type> Cursor;
    EWidgetClipping Clipping;
    ESlateVisibility Visibility;
    float RenderOpacity;
    class UWidgetNavigation* Navigation;
    EFlowDirectionPreference FlowDirectionPreference;
    TArray<class UPropertyBinding*> NativeBindings;

    void SetVisibility(ESlateVisibility InVisibility);
    void SetUserFocus(class APlayerController* PlayerController);
    void SetToolTipText(const FText& InToolTipText);
    void SetToolTip(class UWidget* Widget);
    void SetRenderTranslation(FVector2D Translation);
    void SetRenderTransformPivot(FVector2D Pivot);
    void SetRenderTransformAngle(float Angle);
    void SetRenderTransform(FWidgetTransform InTransform);
    void SetRenderShear(FVector2D Shear);
    void SetRenderScale(FVector2D Scale);
    void SetRenderOpacity(float InOpacity);
    void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);
    void SetNavigationRuleCustomBoundary(EUINavigation Direction, FSetNavigationRuleCustomBoundaryInCustomDelegate InCustomDelegate);
    void SetNavigationRuleCustom(EUINavigation Direction, FSetNavigationRuleCustomInCustomDelegate InCustomDelegate);
    void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
    void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);
    void SetKeyboardFocus();
    void SetIsEnabled(bool bInIsEnabled);
    void SetFocus();
    void SetCursor(TEnumAsByte<EMouseCursor::Type> InCursor);
    void SetClipping(EWidgetClipping InClipping);
    void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);
    void ResetCursor();
    void RemoveFromParent();
    FEventReply OnReply__DelegateSignature();
    FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool IsVisible();
    bool IsHovered();
    void InvalidateLayoutAndVolatility();
    bool HasUserFocusedDescendants(class APlayerController* PlayerController);
    bool HasUserFocus(class APlayerController* PlayerController);
    bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex);
    bool HasMouseCapture();
    bool HasKeyboardFocus();
    bool HasFocusedDescendants();
    bool HasAnyUserFocus();
    class UWidget* GetWidget__DelegateSignature();
    ESlateVisibility GetVisibility();
    FGeometry GetTickSpaceGeometry();
    FText GetText__DelegateSignature();
    ESlateVisibility GetSlateVisibility__DelegateSignature();
    FSlateColor GetSlateColor__DelegateSignature();
    FSlateBrush GetSlateBrush__DelegateSignature();
    float GetRenderTransformAngle();
    float GetRenderOpacity();
    class UPanelWidget* GetParent();
    FGeometry GetPaintSpaceGeometry();
    class APlayerController* GetOwningPlayer();
    class ULocalPlayer* GetOwningLocalPlayer();
    TEnumAsByte<EMouseCursor::Type> GetMouseCursor__DelegateSignature();
    FLinearColor GetLinearColor__DelegateSignature();
    bool GetIsEnabled();
    int32 GetInt32__DelegateSignature();
    class UGameInstance* GetGameInstance();
    float GetFloat__DelegateSignature();
    FVector2D GetDesiredSize();
    EWidgetClipping GetClipping();
    ECheckBoxState GetCheckBoxState__DelegateSignature();
    FGeometry GetCachedGeometry();
    bool GetBool__DelegateSignature();
    FText GetAccessibleText();
    FText GetAccessibleSummaryText();
    class UWidget* GenerateWidgetForString__DelegateSignature(FString Item);
    class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
    void ForceVolatile(bool bForce);
    void ForceLayoutPrepass();
};

class UWidgetAnimation : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;
    TArray<FWidgetAnimationBinding> AnimationBindings;
    bool bLegacyFinishOnStop;
    FString DisplayLabel;

    void UnbindFromAnimationStarted(class UUserWidget* Widget, FUnbindFromAnimationStartedDelegate Delegate);
    void UnbindFromAnimationFinished(class UUserWidget* Widget, FUnbindFromAnimationFinishedDelegate Delegate);
    void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
    void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
    float GetStartTime();
    float GetEndTime();
    void BindToAnimationStarted(class UUserWidget* Widget, FBindToAnimationStartedDelegate Delegate);
    void BindToAnimationFinished(class UUserWidget* Widget, FBindToAnimationFinishedDelegate Delegate);
};

class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
    TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;

};

class UWidgetAnimationPlayCallbackProxy : public UObject
{
    FWidgetAnimationPlayCallbackProxyFinished Finished;
    void WidgetAnimationResult();

    class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
};

class UWidgetBinding : public UPropertyBinding
{

    class UWidget* GetValue();
};

class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
    class UWidgetTree* WidgetTree;
    uint8 bClassRequiresNativeTick;
    TArray<FDelegateRuntimeBinding> Bindings;
    TArray<class UWidgetAnimation*> Animations;
    TArray<FName> NamedSlots;

};

class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FEventReply UnlockMouse(FEventReply& Reply);
    FEventReply Unhandled();
    void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
    void SetWindowTitleBarOnCloseClickedDelegate(FSetWindowTitleBarOnCloseClickedDelegateDelegate Delegate);
    void SetWindowTitleBarCloseButtonActive(bool bActive);
    FEventReply SetUserFocus(FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);
    FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);
    void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
    void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
    void SetInputMode_GameOnly(class APlayerController* PlayerController);
    void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
    void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
    bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor::Type> CursorShape, FName CursorName, FVector2D HotSpot);
    void SetFocusToGameViewport();
    void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
    void SetBrushResourceToTexture(FSlateBrush& Brush, class UTexture2D* Texture);
    void SetBrushResourceToMaterial(FSlateBrush& Brush, class UMaterialInterface* Material);
    void RestorePreviousWindowTitleBarState();
    FEventReply ReleaseMouseCapture(FEventReply& Reply);
    FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);
    void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
    FSlateBrush NoResourceBrush();
    FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height);
    FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height);
    FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
    FEventReply LockMouse(FEventReply& Reply, class UWidget* CapturingWidget);
    bool IsDragDropping();
    FEventReply Handled();
    void GetSafeZonePadding(class UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding);
    FKeyEvent GetKeyEventFromAnalogInputEvent(const FAnalogInputEvent& Event);
    FInputEvent GetInputEventFromPointerEvent(const FPointerEvent& Event);
    FInputEvent GetInputEventFromNavigationEvent(const FNavigationEvent& Event);
    FInputEvent GetInputEventFromKeyEvent(const FKeyEvent& Event);
    FInputEvent GetInputEventFromCharacterEvent(const FCharacterEvent& Event);
    class UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);
    class UDragDropOperation* GetDragDroppingContent();
    class UTexture2D* GetBrushResourceAsTexture2D(const FSlateBrush& Brush);
    class UMaterialInterface* GetBrushResourceAsMaterial(const FSlateBrush& Brush);
    class UObject* GetBrushResource(const FSlateBrush& Brush);
    void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>& FoundWidgets, TSubclassOf<class UInterface> Interface, bool TopLevelOnly);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>& FoundWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
    FEventReply EndDragDrop(FEventReply& Reply);
    void DrawTextFormatted(FPaintContext& Context, const FText& Text, FVector2D Position, class UFont* Font, int32 FontSize, FName FontTypeFace, FLinearColor Tint);
    void DrawText(FPaintContext& Context, FString inString, FVector2D Position, FLinearColor Tint);
    void DrawLines(FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness);
    void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness);
    void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, class USlateBrushAsset* Brush, FLinearColor Tint);
    void DismissAllMenus();
    FEventReply DetectDragIfPressed(const FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, FKey DragKey);
    FEventReply DetectDrag(FEventReply& Reply, class UWidget* WidgetDetectingDrag, FKey DragKey);
    class UDragDropOperation* CreateDragDropOperation(TSubclassOf<class UDragDropOperation> OperationClass);
    class UUserWidget* Create(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetType, class APlayerController* OwningPlayer);
    FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);
    FEventReply CaptureMouse(FEventReply& Reply, class UWidget* CapturingWidget);
    FEventReply CaptureJoystick(FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
    void CancelDragDrop();
};

class UWidgetComponent : public UMeshComponent
{
    EWidgetSpace Space;
    EWidgetTimingPolicy TimingPolicy;
    TSubclassOf<class UUserWidget> WidgetClass;
    FIntPoint DrawSize;
    bool bManuallyRedraw;
    bool bRedrawRequested;
    float RedrawTime;
    FIntPoint CurrentDrawSize;
    bool bDrawAtDesiredSize;
    FVector2D Pivot;
    bool bReceiveHardwareInput;
    bool bWindowFocusable;
    EWindowVisibility WindowVisibility;
    bool bApplyGammaCorrection;
    class ULocalPlayer* OwnerPlayer;
    FLinearColor BackgroundColor;
    FLinearColor TintColorAndOpacity;
    float OpacityFromTexture;
    EWidgetBlendMode BlendMode;
    bool bIsTwoSided;
    bool TickWhenOffscreen;
    class UBodySetup* BodySetup;
    class UMaterialInterface* TranslucentMaterial;
    class UMaterialInterface* TranslucentMaterial_OneSided;
    class UMaterialInterface* OpaqueMaterial;
    class UMaterialInterface* OpaqueMaterial_OneSided;
    class UMaterialInterface* MaskedMaterial;
    class UMaterialInterface* MaskedMaterial_OneSided;
    class UTextureRenderTarget2D* RenderTarget;
    class UMaterialInstanceDynamic* MaterialInstance;
    bool bAddedToScreen;
    bool bEditTimeUsable;
    FName SharedLayerName;
    int32 LayerZOrder;
    EWidgetGeometryMode GeometryMode;
    float CylinderArcAngle;
    ETickMode TickMode;
    class UUserWidget* Widget;

    void SetWindowVisibility(EWindowVisibility InVisibility);
    void SetWindowFocusable(bool bInWindowFocusable);
    void SetWidgetSpace(EWidgetSpace NewSpace);
    void SetWidget(class UUserWidget* Widget);
    void SetTwoSided(const bool bWantTwoSided);
    void SetTintColorAndOpacity(const FLinearColor NewTintColorAndOpacity);
    void SetTickWhenOffscreen(const bool bWantTickWhenOffscreen);
    void SetTickMode(ETickMode InTickMode);
    void SetRedrawTime(float InRedrawTime);
    void SetPivot(const FVector2D& InPivot);
    void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
    void SetManuallyRedraw(bool bUseManualRedraw);
    void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
    void SetDrawSize(FVector2D Size);
    void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
    void SetCylinderArcAngle(const float InCylinderArcAngle);
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    void RequestRenderUpdate();
    void RequestRedraw();
    bool IsWidgetVisible();
    EWindowVisibility GetWindowVisiblility();
    bool GetWindowFocusable();
    EWidgetSpace GetWidgetSpace();
    class UUserWidget* GetWidget();
    class UUserWidget* GetUserWidgetObject();
    bool GetTwoSided();
    bool GetTickWhenOffscreen();
    class UTextureRenderTarget2D* GetRenderTarget();
    float GetRedrawTime();
    FVector2D GetPivot();
    class ULocalPlayer* GetOwnerPlayer();
    class UMaterialInstanceDynamic* GetMaterialInstance();
    bool GetManuallyRedraw();
    EWidgetGeometryMode GetGeometryMode();
    FVector2D GetDrawSize();
    bool GetDrawAtDesiredSize();
    float GetCylinderArcAngle();
    FVector2D GetCurrentDrawSize();
};

class UWidgetInteractionComponent : public USceneComponent
{
    FWidgetInteractionComponentOnHoveredWidgetChanged OnHoveredWidgetChanged;
    void OnHoveredWidgetChanged(class UWidgetComponent* WidgetComponent, class UWidgetComponent* PreviousWidgetComponent);
    int32 VirtualUserIndex;
    int32 PointerIndex;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    float InteractionDistance;
    EWidgetInteractionSource InteractionSource;
    bool bEnableHitTesting;
    bool bShowDebug;
    float DebugSphereLineThickness;
    float DebugLineThickness;
    FLinearColor DebugColor;
    FHitResult CustomHitResult;
    FVector2D LocalHitLocation;
    FVector2D LastLocalHitLocation;
    class UWidgetComponent* HoveredWidgetComponent;
    FHitResult LastHitResult;
    bool bIsHoveredWidgetInteractable;
    bool bIsHoveredWidgetFocusable;
    bool bIsHoveredWidgetHitTestVisible;

    void SetFocus(class UWidget* FocusWidget);
    void SetCustomHitResult(const FHitResult& HitResult);
    bool SendKeyChar(FString Characters, bool bRepeat);
    void ScrollWheel(float ScrollDelta);
    void ReleasePointerKey(FKey Key);
    bool ReleaseKey(FKey Key);
    void PressPointerKey(FKey Key);
    bool PressKey(FKey Key, bool bRepeat);
    bool PressAndReleaseKey(FKey Key);
    bool IsOverInteractableWidget();
    bool IsOverHitTestVisibleWidget();
    bool IsOverFocusableWidget();
    FHitResult GetLastHitResult();
    class UWidgetComponent* GetHoveredWidgetComponent();
    FVector2D Get2DHitLocation();
};

class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{

    class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget);
    class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget);
    class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
    class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
    class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget);
    class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget);
    class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget);
    class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget);
    class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
    class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
    class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
    class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
    class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
    void RemoveAllWidgets(class UObject* WorldContextObject);
    bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
    FVector2D GetViewportSize(class UObject* WorldContextObject);
    float GetViewportScale(class UObject* WorldContextObject);
    FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
    bool GetMousePositionScaledByDPI(class APlayerController* Player, float& LocationX, float& LocationY);
    FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
    FVector2D GetMousePositionOnPlatform();
};

class UWidgetNavigation : public UObject
{
    FWidgetNavigationData Up;
    FWidgetNavigationData Down;
    FWidgetNavigationData Left;
    FWidgetNavigationData Right;
    FWidgetNavigationData Next;
    FWidgetNavigationData Previous;

};

class UWidgetSwitcher : public UPanelWidget
{
    int32 ActiveWidgetIndex;

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(class UWidget* Widget);
    class UWidget* GetWidgetAtIndex(int32 Index);
    int32 GetNumWidgets();
    int32 GetActiveWidgetIndex();
    class UWidget* GetActiveWidget();
};

class UWidgetSwitcherSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UWidgetTree : public UObject
{
    class UWidget* RootWidget;

};

class UWindowTitleBarArea : public UContentWidget
{
    bool bWindowButtonsEnabled;
    bool bDoubleClickTogglesFullscreen;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UWindowTitleBarAreaSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

class UWrapBox : public UPanelWidget
{
    FVector2D InnerSlotPadding;
    float WrapWidth;
    float WrapSize;
    bool bExplicitWrapWidth;
    bool bExplicitWrapSize;
    TEnumAsByte<EOrientation> Orientation;

    void SetInnerSlotPadding(FVector2D InPadding);
    class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
};

class UWrapBoxSlot : public UPanelSlot
{
    FMargin Padding;
    bool bFillEmptySpace;
    float FillSpanWhenLessThan;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
    void SetFillEmptySpace(bool InbFillEmptySpace);
};

#endif
