#ifndef UE4SS_SDK_UMG_HPP
#define UE4SS_SDK_UMG_HPP

#include "UMG_enums.hpp"

class UVisual : UObject
{
}

class UWidget : UVisual
{
    UPanelSlot* Slot;
    FWidgetBIsEnabledDelegate bIsEnabledDelegate;
    bool GetBool();
    FText ToolTipText;
    FWidgetToolTipTextDelegate ToolTipTextDelegate;
    FText GetText();
    UWidget* ToolTipWidget;
    FWidgetToolTipWidgetDelegate ToolTipWidgetDelegate;
    UWidget* GetWidget();
    FWidgetVisibilityDelegate VisibilityDelegate;
    ESlateVisibility GetSlateVisibility();
    FWidgetTransform RenderTransform;
    FVector2D RenderTransformPivot;
    uint8 bIsVariable;
    uint8 bCreatedByConstructionScript;
    uint8 bIsEnabled;
    uint8 bOverride_Cursor;
    USlateAccessibleWidgetData* AccessibleWidgetData;
    uint8 bIsVolatile;
    TEnumAsByte<EMouseCursor::Type> Cursor;
    EWidgetClipping Clipping;
    ESlateVisibility Visibility;
    float RenderOpacity;
    UWidgetNavigation* Navigation;
    EFlowDirectionPreference FlowDirectionPreference;
    TArray<UPropertyBinding*> NativeBindings;

    void SetVisibility(ESlateVisibility InVisibility);
    void SetUserFocus(UPlayerController* PlayerController);
    void SetToolTipText(const FText& InToolTipText);
    void SetToolTip(UWidget* Widget);
    void SetRenderTranslation(FVector2D Translation);
    void SetRenderTransformPivot(FVector2D Pivot);
    void SetRenderTransformAngle(float Angle);
    void SetRenderTransform(FWidgetTransform InTransform);
    void SetRenderShear(FVector2D Shear);
    void SetRenderScale(FVector2D Scale);
    void SetRenderOpacity(float InOpacity);
    void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget);
    void SetNavigationRuleCustomBoundary(EUINavigation Direction, CustomWidgetNavigationDelegate__DelegateSignature InCustomDelegate);
    void SetNavigationRuleCustom(EUINavigation Direction, CustomWidgetNavigationDelegate__DelegateSignature InCustomDelegate);
    void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
    void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);
    void SetKeyboardFocus();
    void SetIsEnabled(bool bInIsEnabled);
    void SetFocus();
    void SetCursor(uint8 InCursor);
    void SetClipping(EWidgetClipping InClipping);
    void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);
    void ResetCursor();
    void RemoveFromParent();
    FEventReply OnReply__DelegateSignature();
    FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool IsVisible();
    bool IsHovered();
    void InvalidateLayoutAndVolatility();
    bool HasUserFocusedDescendants(UPlayerController* PlayerController);
    bool HasUserFocus(UPlayerController* PlayerController);
    bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex);
    bool HasMouseCapture();
    bool HasKeyboardFocus();
    bool HasFocusedDescendants();
    bool HasAnyUserFocus();
    UWidget* GetWidget__DelegateSignature();
    ESlateVisibility GetVisibility();
    FGeometry GetTickSpaceGeometry();
    FText GetText__DelegateSignature();
    ESlateVisibility GetSlateVisibility__DelegateSignature();
    FSlateColor GetSlateColor__DelegateSignature();
    FSlateBrush GetSlateBrush__DelegateSignature();
    float GetRenderTransformAngle();
    float GetRenderOpacity();
    UPanelWidget* GetParent();
    FGeometry GetPaintSpaceGeometry();
    APlayerController* GetOwningPlayer();
    ULocalPlayer* GetOwningLocalPlayer();
    TEnumAsByte<EMouseCursor::Type> GetMouseCursor__DelegateSignature();
    FLinearColor GetLinearColor__DelegateSignature();
    bool GetIsEnabled();
    int32 GetInt32__DelegateSignature();
    UGameInstance* GetGameInstance();
    float GetFloat__DelegateSignature();
    FVector2D GetDesiredSize();
    EWidgetClipping GetClipping();
    ECheckBoxState GetCheckBoxState__DelegateSignature();
    FGeometry GetCachedGeometry();
    bool GetBool__DelegateSignature();
    UWidget* GenerateWidgetForString__DelegateSignature(FString Item);
    UWidget* GenerateWidgetForObject__DelegateSignature(UObject* Item);
    void ForceVolatile(bool bForce);
    void ForceLayoutPrepass();
}

class UUserWidget : UWidget
{
    FLinearColor ColorAndOpacity;
    FUserWidgetColorAndOpacityDelegate ColorAndOpacityDelegate;
    FLinearColor GetLinearColor();
    FSlateColor ForegroundColor;
    FUserWidgetForegroundColorDelegate ForegroundColorDelegate;
    FSlateColor GetSlateColor();
    FMargin Padding;
    TArray<UUMGSequencePlayer*> ActiveSequencePlayers;
    TArray<UUMGSequencePlayer*> StoppedSequencePlayers;
    TArray<FNamedSlotBinding> NamedSlotBindings;
    UWidgetTree* WidgetTree;
    int32 Priority;
    uint8 bSupportsKeyboardFocus;
    uint8 bIsFocusable;
    uint8 bStopAction;
    uint8 bHasScriptImplementedTick;
    uint8 bHasScriptImplementedPaint;
    uint8 bCookedWidgetTree;
    EWidgetTickFrequency TickFrequency;
    UInputComponent* InputComponent;
    TArray<FAnimationEventBinding> AnimationCallbacks;

    void UnregisterInputComponent();
    void UnbindFromAnimationStarted(UWidgetAnimation* Animation, WidgetAnimationDynamicEvent__DelegateSignature Delegate);
    void UnbindFromAnimationFinished(UWidgetAnimation* Animation, WidgetAnimationDynamicEvent__DelegateSignature Delegate);
    void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation);
    void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void StopListeningForInputAction(FName ActionName, uint8 EventType);
    void StopListeningForAllInputActions();
    void StopAnimationsAndLatentActions();
    void StopAnimation(const UWidgetAnimation* InAnimation);
    void StopAllAnimations();
    void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);
    void SetPlaybackSpeed(const UWidgetAnimation* InAnimation, float PlaybackSpeed);
    void SetPadding(FMargin InPadding);
    void SetOwningPlayer(UPlayerController* LocalPlayerController);
    void SetNumLoopsToPlay(const UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
    void SetInputActionPriority(int32 NewPriority);
    void SetInputActionBlocking(bool bShouldBlock);
    void SetForegroundColor(FSlateColor InForegroundColor);
    void SetDesiredSizeInViewport(FVector2D Size);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetAnchorsInViewport(FAnchors Anchors);
    void SetAlignmentInViewport(FVector2D Alignment);
    void ReverseAnimation(const UWidgetAnimation* InAnimation);
    void RemoveFromViewport();
    void RegisterInputComponent();
    void PreConstruct(bool IsDesignTime);
    void PlaySound(USoundBase* SoundToPlay);
    UUMGSequencePlayer* PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, uint8 PlayMode, float PlaybackSpeed, bool bRestoreState);
    UUMGSequencePlayer* PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    UUMGSequencePlayer* PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    UUMGSequencePlayer* PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, uint8 PlayMode, float PlaybackSpeed, bool bRestoreState);
    float PauseAnimation(const UWidgetAnimation* InAnimation);
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
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation);
    void OnDragCancelled(const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
    void OnAnimationStarted(const UWidgetAnimation* Animation);
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void ListenForInputAction(FName ActionName, uint8 EventType, bool bConsume, OnInputAction__DelegateSignature Callback);
    bool IsPlayingAnimation();
    bool IsListeningForInputAction(FName ActionName);
    bool IsInViewport();
    bool IsInteractable();
    bool IsAnyAnimationPlaying();
    bool IsAnimationPlayingForward(const UWidgetAnimation* InAnimation);
    bool IsAnimationPlaying(const UWidgetAnimation* InAnimation);
    APawn* GetOwningPlayerPawn();
    bool GetIsVisible();
    float GetAnimationCurrentTime(const UWidgetAnimation* InAnimation);
    FAnchors GetAnchorsInViewport();
    FVector2D GetAlignmentInViewport();
    void Destruct();
    void Construct();
    void CancelLatentActions();
    void BindToAnimationStarted(UWidgetAnimation* Animation, WidgetAnimationDynamicEvent__DelegateSignature Delegate);
    void BindToAnimationFinished(UWidgetAnimation* Animation, WidgetAnimationDynamicEvent__DelegateSignature Delegate);
    void BindToAnimationEvent(UWidgetAnimation* Animation, WidgetAnimationDynamicEvent__DelegateSignature Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag);
    void AddToViewport(int32 ZOrder);
    bool AddToPlayerScreen(int32 ZOrder);
}

class URichTextBlockDecorator : UObject
{
}

class UWidgetComponent : UMeshComponent
{
    EWidgetSpace Space;
    EWidgetTimingPolicy TimingPolicy;
    TSubclassOf<UUserWidget> WidgetClass;
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
    ULocalPlayer* OwnerPlayer;
    FLinearColor BackgroundColor;
    FLinearColor TintColorAndOpacity;
    float OpacityFromTexture;
    EWidgetBlendMode BlendMode;
    bool bIsTwoSided;
    bool TickWhenOffscreen;
    UUserWidget* Widget;
    UBodySetup* BodySetup;
    UMaterialInterface* TranslucentMaterial;
    UMaterialInterface* TranslucentMaterial_OneSided;
    UMaterialInterface* OpaqueMaterial;
    UMaterialInterface* OpaqueMaterial_OneSided;
    UMaterialInterface* MaskedMaterial;
    UMaterialInterface* MaskedMaterial_OneSided;
    UTextureRenderTarget2D* RenderTarget;
    UMaterialInstanceDynamic* MaterialInstance;
    bool bAddedToScreen;
    bool bEditTimeUsable;
    FName SharedLayerName;
    int32 LayerZOrder;
    EWidgetGeometryMode GeometryMode;
    float CylinderArcAngle;

    void SetWindowVisibility(EWindowVisibility InVisibility);
    void SetWindowFocusable(bool bInWindowFocusable);
    void SetWidgetSpace(EWidgetSpace NewSpace);
    void SetWidget(UUserWidget* Widget);
    void SetTwoSided(const bool bWantTwoSided);
    void SetTintColorAndOpacity(const FLinearColor NewTintColorAndOpacity);
    void SetTickWhenOffscreen(const bool bWantTickWhenOffscreen);
    void SetRedrawTime(float InRedrawTime);
    void SetPivot(const FVector2D& InPivot);
    void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
    void SetManuallyRedraw(bool bUseManualRedraw);
    void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
    void SetDrawSize(FVector2D Size);
    void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
    void SetCylinderArcAngle(const float InCylinderArcAngle);
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    void RequestRedraw();
    EWindowVisibility GetWindowVisiblility();
    bool GetWindowFocusable();
    EWidgetSpace GetWidgetSpace();
    UUserWidget* GetUserWidgetObject();
    bool GetTwoSided();
    bool GetTickWhenOffscreen();
    UTextureRenderTarget2D* GetRenderTarget();
    float GetRedrawTime();
    FVector2D GetPivot();
    ULocalPlayer* GetOwnerPlayer();
    UMaterialInstanceDynamic* GetMaterialInstance();
    bool GetManuallyRedraw();
    EWidgetGeometryMode GetGeometryMode();
    FVector2D GetDrawSize();
    bool GetDrawAtDesiredSize();
    float GetCylinderArcAngle();
    FVector2D GetCurrentDrawSize();
}

class UTextLayoutWidget : UWidget
{
    FShapedTextOptions ShapedTextOptions;
    TEnumAsByte<ETextJustify::Type> Justification;
    ETextWrappingPolicy WrappingPolicy;
    uint8 AutoWrapText;
    float WrapTextAt;
    FMargin Margin;
    float LineHeightPercentage;

    void SetJustification(uint8 InJustification);
}

class UTextBlock : UTextLayoutWidget
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
    bool bSimpleTextMode;

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
    UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
    UMaterialInstanceDynamic* GetDynamicFontMaterial();
}

class URichTextBlock : UTextLayoutWidget
{
    FText Text;
    UDataTable* TextStyleSet;
    TArray<TSubclassOf<URichTextBlockDecorator>> DecoratorClasses;
    bool bOverrideDefaultStyle;
    FTextBlockStyle DefaultTextStyleOverride;
    float MinDesiredWidth;
    TArray<URichTextBlockDecorator*> InstanceDecorators;

    void SetTextStyleSet(UDataTable* NewTextStyleSet);
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
    URichTextBlockDecorator* GetDecoratorByClass(TSubclassOf<URichTextBlockDecorator> DecoratorClass);
    void ClearAllDefaultStyleOverrides();
}

class UAsyncTaskDownloadImage : UBlueprintAsyncActionBase
{
    FAsyncTaskDownloadImageOnSuccess OnSuccess;
    void DownloadImageDelegate(UTexture2DDynamic* Texture);
    FAsyncTaskDownloadImageOnFail OnFail;
    void DownloadImageDelegate(UTexture2DDynamic* Texture);

    UAsyncTaskDownloadImage* DownloadImage(FString URL);
}

class UPanelWidget : UWidget
{
    TArray<UPanelSlot*> Slots;

    bool RemoveChildAt(int32 Index);
    bool RemoveChild(UWidget* Content);
    bool HasChild(UWidget* Content);
    bool HasAnyChildren();
    int32 GetChildrenCount();
    int32 GetChildIndex(const UWidget* Content);
    UWidget* GetChildAt(int32 Index);
    TArray<UWidget*> GetAllChildren();
    void ClearChildren();
    UPanelSlot* AddChild(UWidget* Content);
}

class UContentWidget : UPanelWidget
{

    UPanelSlot* SetContent(UWidget* Content);
    UPanelSlot* GetContentSlot();
    UWidget* GetContent();
}

class UBackgroundBlur : UContentWidget
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    bool bApplyAlphaToBlur;
    float BlurStrength;
    bool bOverrideAutoRadiusCalculation;
    int32 BlurRadius;
    FSlateBrush LowQualityFallbackBrush;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
    void SetBlurStrength(float InStrength);
    void SetBlurRadius(int32 InBlurRadius);
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
}

class UPanelSlot : UVisual
{
    UPanelWidget* Parent;
    UWidget* Content;
}

class UBackgroundBlurSlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UPropertyBinding : UObject
{
    TWeakObjectPtr<UObject> SourceObject;
    FDynamicPropertyPath SourcePath;
    FName DestinationProperty;
}

class UBoolBinding : UPropertyBinding
{

    bool GetValue();
}

class UBorder : UContentWidget
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

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
    void SetDesiredSizeScale(FVector2D InScale);
    void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
    void SetBrushFromTexture(UTexture2D* Texture);
    void SetBrushFromMaterial(UMaterialInterface* Material);
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    void SetBrushColor(FLinearColor InBrushColor);
    void SetBrush(const FSlateBrush& InBrush);
    UMaterialInstanceDynamic* GetDynamicMaterial();
}

class UBorderSlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UBrushBinding : UPropertyBinding
{

    FSlateBrush GetValue();
}

class UButton : UContentWidget
{
    USlateWidgetStyleAsset* Style;
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

    void SetTouchMethod(uint8 InTouchMethod);
    void SetStyle(const FButtonStyle& InStyle);
    void SetPressMethod(uint8 InPressMethod);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetClickMethod(uint8 InClickMethod);
    void SetBackgroundColor(FLinearColor InBackgroundColor);
    bool IsPressed();
}

class UButtonSlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UCanvasPanel : UPanelWidget
{

    UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);
}

class UCanvasPanelSlot : UPanelSlot
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
}

class UCheckBox : UContentWidget
{
    ECheckBoxState CheckedState;
    FCheckBoxCheckedStateDelegate CheckedStateDelegate;
    ECheckBoxState GetCheckBoxState();
    FCheckBoxStyle WidgetStyle;
    USlateWidgetStyleAsset* Style;
    USlateBrushAsset* UncheckedImage;
    USlateBrushAsset* UncheckedHoveredImage;
    USlateBrushAsset* UncheckedPressedImage;
    USlateBrushAsset* CheckedImage;
    USlateBrushAsset* CheckedHoveredImage;
    USlateBrushAsset* CheckedPressedImage;
    USlateBrushAsset* UndeterminedImage;
    USlateBrushAsset* UndeterminedHoveredImage;
    USlateBrushAsset* UndeterminedPressedImage;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    FMargin Padding;
    FSlateColor BorderBackgroundColor;
    bool IsFocusable;
    FCheckBoxOnCheckStateChanged OnCheckStateChanged;
    void OnCheckBoxComponentStateChanged(bool bIsChecked);

    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(ECheckBoxState InCheckedState);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
}

class UCheckedStateBinding : UPropertyBinding
{

    ECheckBoxState GetValue();
}

class UCircularThrobber : UWidget
{
    int32 NumberOfPieces;
    float Period;
    float Radius;
    USlateBrushAsset* PieceImage;
    FSlateBrush Image;
    bool bEnableRadius;

    void SetRadius(float InRadius);
    void SetPeriod(float InPeriod);
    void SetNumberOfPieces(int32 InNumberOfPieces);
}

class UColorBinding : UPropertyBinding
{

    FSlateColor GetSlateValue();
    FLinearColor GetLinearValue();
}

class UComboBox : UWidget
{
    TArray<UObject*> Items;
    FComboBoxOnGenerateWidgetEvent OnGenerateWidgetEvent;
    UWidget* GenerateWidgetForObject(UObject* Item);
    bool bIsFocusable;
}

class UComboBoxString : UWidget
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
    UWidget* GenerateWidgetForString(FString Item);
    FComboBoxStringOnSelectionChanged OnSelectionChanged;
    void OnSelectionChangedEvent(FString SelectedItem, uint8 SelectionType);
    FComboBoxStringOnOpening OnOpening;
    void OnOpeningEvent();

    void SetSelectedOption(FString Option);
    void SetSelectedIndex(const int32 Index);
    bool RemoveOption(FString Option);
    void RefreshOptions();
    void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, uint8 SelectionType);
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
}

class UDragDropOperation : UObject
{
    FString Tag;
    UObject* Payload;
    UWidget* DefaultDragVisual;
    EDragPivot Pivot;
    FVector2D Offset;
    FDragDropOperationOnDrop OnDrop;
    void OnDragDropMulticast(UDragDropOperation* Operation);
    FDragDropOperationOnDragCancelled OnDragCancelled;
    void OnDragDropMulticast(UDragDropOperation* Operation);
    FDragDropOperationOnDragged OnDragged;
    void OnDragDropMulticast(UDragDropOperation* Operation);

    void Drop(const FPointerEvent& PointerEvent);
    void Dragged(const FPointerEvent& PointerEvent);
    void DragCancelled(const FPointerEvent& PointerEvent);
}

class UDynamicEntryBoxBase : UWidget
{
    EDynamicBoxType EntryBoxType;
    FVector2D EntrySpacing;
    TArray<FVector2D> SpacingPattern;
    FSlateChildSize EntrySizeRule;
    TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment;
    int32 MaxElementSize;
    FUserWidgetPool EntryWidgetPool;

    void SetEntrySpacing(const FVector2D& InEntrySpacing);
    int32 GetNumEntries();
    TArray<UUserWidget*> GetAllEntries();
}

class UDynamicEntryBox : UDynamicEntryBoxBase
{
    TSubclassOf<UUserWidget> EntryWidgetClass;

    void Reset(bool bDeleteWidgets);
    void RemoveEntry(UUserWidget* EntryWidget);
    UUserWidget* BP_CreateEntryOfClass(TSubclassOf<UUserWidget> EntryClass);
    UUserWidget* BP_CreateEntry();
}

class UEditableText : UWidget
{
    FText Text;
    FEditableTextTextDelegate TextDelegate;
    FText GetText();
    FText HintText;
    FEditableTextHintTextDelegate HintTextDelegate;
    FText GetText();
    FEditableTextStyle WidgetStyle;
    USlateWidgetStyleAsset* Style;
    USlateBrushAsset* BackgroundImageSelected;
    USlateBrushAsset* BackgroundImageComposing;
    USlateBrushAsset* CaretImage;
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
    void OnEditableTextCommittedEvent(const FText& Text, uint8 CommitMethod);

    void SetText(FText InText);
    void SetJustification(uint8 InJustification);
    void SetIsReadOnly(bool InbIsReadyOnly);
    void SetIsPassword(bool InbIsPassword);
    void SetHintText(FText InHintText);
    void OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, uint8 CommitMethod);
    void OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
}

class UEditableTextBox : UWidget
{
    FText Text;
    FEditableTextBoxTextDelegate TextDelegate;
    FText GetText();
    FEditableTextBoxStyle WidgetStyle;
    USlateWidgetStyleAsset* Style;
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
    void OnEditableTextBoxCommittedEvent(const FText& Text, uint8 CommitMethod);

    void SetText(FText InText);
    void SetJustification(uint8 InJustification);
    void SetIsReadOnly(bool bReadOnly);
    void SetIsPassword(bool bIsPassword);
    void SetHintText(FText InText);
    void SetError(FText InError);
    void OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, uint8 CommitMethod);
    void OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    bool HasError();
    FText GetText();
    void ClearError();
}

class UExpandableArea : UWidget
{
    FExpandableAreaStyle Style;
    FSlateBrush BorderBrush;
    FSlateColor BorderColor;
    bool bIsExpanded;
    float MaxHeight;
    FMargin HeaderPadding;
    FMargin AreaPadding;
    FExpandableAreaOnExpansionChanged OnExpansionChanged;
    void OnExpandableAreaExpansionChanged(UExpandableArea* Area, bool bIsExpanded);
    UWidget* HeaderContent;
    UWidget* BodyContent;

    void SetIsExpanded_Animated(bool IsExpanded);
    void SetIsExpanded(bool IsExpanded);
    bool GetIsExpanded();
}

class UFloatBinding : UPropertyBinding
{

    float GetValue();
}

class UGridPanel : UPanelWidget
{
    TArray<float> ColumnFill;
    TArray<float> RowFill;

    void SetRowFill(int32 ColumnIndex, float Coefficient);
    void SetColumnFill(int32 ColumnIndex, float Coefficient);
    UGridSlot* AddChildToGrid(UWidget* Content, int32 InRow, int32 InColumn);
}

class UGridSlot : UPanelSlot
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

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetRowSpan(int32 InRowSpan);
    void SetRow(int32 InRow);
    void SetPadding(FMargin InPadding);
    void SetNudge(FVector2D InNudge);
    void SetLayer(int32 InLayer);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
    void SetColumnSpan(int32 InColumnSpan);
    void SetColumn(int32 InColumn);
}

class UHorizontalBox : UPanelWidget
{

    UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);
}

class UHorizontalBoxSlot : UPanelSlot
{
    FMargin Padding;
    FSlateChildSize Size;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetSize(FSlateChildSize InSize);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UImage : UWidget
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
    void SetBrushResourceObject(UObject* ResourceObject);
    void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);
    void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
    void SetBrushFromSoftTexture(SoftObjectProperty SoftTexture, bool bMatchSize);
    void SetBrushFromSoftMaterial(SoftObjectProperty SoftMaterial);
    void SetBrushFromMaterial(UMaterialInterface* Material);
    void SetBrushFromAtlasInterface(InterfaceProperty AtlasRegion, bool bMatchSize);
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    void SetBrush(const FSlateBrush& InBrush);
    UMaterialInstanceDynamic* GetDynamicMaterial();
}

class UInputKeySelector : UWidget
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
}

class UInt32Binding : UPropertyBinding
{

    int32 GetValue();
}

class UInvalidationBox : UContentWidget
{
    bool bCanCache;
    bool CacheRelativeTransforms;

    void SetCanCache(bool CanCache);
    void InvalidateCache();
    bool GetCanCache();
}

class UUserListEntry : UInterface
{

    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnEntryReleased();
}

class UUserListEntryLibrary : UBlueprintFunctionLibrary
{

    bool IsListItemSelected(InterfaceProperty UserListEntry);
    bool IsListItemExpanded(InterfaceProperty UserListEntry);
    UListViewBase* GetOwningListView(InterfaceProperty UserListEntry);
}

class UUserObjectListEntry : UUserListEntry
{

    void OnListItemObjectSet(UObject* ListItemObject);
}

class UUserObjectListEntryLibrary : UBlueprintFunctionLibrary
{

    UObject* GetListItemObject(InterfaceProperty UserObjectListEntry);
}

class UListViewBase : UWidget
{
    TSubclassOf<UUserWidget> EntryWidgetClass;
    float WheelScrollMultiplier;
    bool bEnableScrollAnimation;
    bool bEnableFixedLineOffset;
    float FixedLineScrollOffset;
    FListViewBaseBP_OnEntryGenerated BP_OnEntryGenerated;
    void OnListEntryGeneratedDynamic(UUserWidget* Widget);
    FListViewBaseBP_OnEntryReleased BP_OnEntryReleased;
    void OnListEntryReleasedDynamic(UUserWidget* Widget);
    FUserWidgetPool EntryWidgetPool;

    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    void SetScrollOffset(const float InScrollOffset);
    void SetScrollbarVisibility(ESlateVisibility InVisibility);
    void ScrollToTop();
    void ScrollToBottom();
    void RequestRefresh();
    void RegenerateAllEntries();
    TArray<UUserWidget*> GetDisplayedEntryWidgets();
}

class UListView : UListViewBase
{
    TEnumAsByte<EOrientation> Orientation;
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    EConsumeMouseWheel ConsumeMouseWheel;
    bool bClearSelectionOnClick;
    bool bIsFocusable;
    float EntrySpacing;
    bool bReturnFocusToSelection;
    TArray<UObject*> ListItems;
    FListViewBP_OnEntryInitialized BP_OnEntryInitialized;
    void OnListEntryInitializedDynamic(UObject* Item, UUserWidget* Widget);
    FListViewBP_OnItemClicked BP_OnItemClicked;
    void SimpleListItemEventDynamic(UObject* Item);
    FListViewBP_OnItemDoubleClicked BP_OnItemDoubleClicked;
    void SimpleListItemEventDynamic(UObject* Item);
    FListViewBP_OnItemIsHoveredChanged BP_OnItemIsHoveredChanged;
    void OnItemIsHoveredChangedDynamic(UObject* Item, bool bIsHovered);
    FListViewBP_OnItemSelectionChanged BP_OnItemSelectionChanged;
    void OnListItemSelectionChangedDynamic(UObject* Item, bool bIsSelected);
    FListViewBP_OnItemScrolledIntoView BP_OnItemScrolledIntoView;
    void OnListItemScrolledIntoViewDynamic(UObject* Item, UUserWidget* Widget);

    void SetSelectionMode(uint8 SelectionMode);
    void SetSelectedIndex(int32 Index);
    void ScrollIndexIntoView(int32 Index);
    void RemoveItem(UObject* Item);
    void NavigateToIndex(int32 Index);
    bool IsRefreshPending();
    int32 GetNumItems();
    TArray<UObject*> GetListItems();
    UObject* GetItemAt(int32 Index);
    int32 GetIndexForItem(UObject* Item);
    void ClearListItems();
    void BP_SetSelectedItem(UObject* Item);
    void BP_SetListItems(const TArray<UObject*>& InListItems);
    void BP_SetItemSelection(UObject* Item, bool bSelected);
    void BP_ScrollItemIntoView(UObject* Item);
    void BP_NavigateToItem(UObject* Item);
    bool BP_IsItemVisible(UObject* Item);
    bool BP_GetSelectedItems(TArray<UObject*>& Items);
    UObject* BP_GetSelectedItem();
    int32 BP_GetNumItemsSelected();
    void BP_ClearSelection();
    void BP_CancelScrollIntoView();
    void AddItem(UObject* Item);
}

class UListViewDesignerPreviewItem : UObject
{
}

class UMenuAnchor : UContentWidget
{
    TSubclassOf<UUserWidget> MenuClass;
    FMenuAnchorOnGetMenuContentEvent OnGetMenuContentEvent;
    UWidget* GetWidget();
    TEnumAsByte<EMenuPlacement> Placement;
    bool bFitInWindow;
    bool ShouldDeferPaintingAfterWindowContent;
    bool UseApplicationMenuStack;
    FMenuAnchorOnMenuOpenChanged OnMenuOpenChanged;
    void OnMenuOpenChangedEvent(bool bIsOpen);

    void ToggleOpen(bool bFocusOnOpen);
    bool ShouldOpenDueToClick();
    void SetPlacement(uint8 InPlacement);
    void Open(bool bFocusMenu);
    bool IsOpen();
    bool HasOpenSubMenus();
    FVector2D GetMenuPosition();
    void FitInWindow(bool bFit);
    void Close();
}

class UMouseCursorBinding : UPropertyBinding
{

    TEnumAsByte<EMouseCursor::Type> GetValue();
}

class UMovieScene2DTransformSection : UMovieSceneSection
{
    FMovieScene2DTransformMask TransformMask;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;
    FMovieSceneFloatChannel Shear;
}

class UMovieScene2DTransformTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneMarginSection : UMovieSceneSection
{
    FMovieSceneFloatChannel TopCurve;
    FMovieSceneFloatChannel LeftCurve;
    FMovieSceneFloatChannel RightCurve;
    FMovieSceneFloatChannel BottomCurve;
}

class UMovieSceneMarginTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack
{
    TArray<FName> BrushPropertyNamePath;
    FName TrackName;
}

class UMultiLineEditableText : UTextLayoutWidget
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
    void OnMultiLineEditableTextCommittedEvent(const FText& Text, uint8 CommitMethod);

    void SetWidgetStyle(const FTextBlockStyle& InWidgetStyle);
    void SetText(FText InText);
    void SetIsReadOnly(bool bReadOnly);
    void SetHintText(FText InHintText);
    void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const FText& Text, uint8 CommitMethod);
    void OnMultiLineEditableTextChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
    FText GetHintText();
}

class UMultiLineEditableTextBox : UTextLayoutWidget
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
    USlateWidgetStyleAsset* Style;
    FSlateFontInfo Font;
    FLinearColor ForegroundColor;
    FLinearColor BackgroundColor;
    FLinearColor ReadOnlyForegroundColor;
    FMultiLineEditableTextBoxOnTextChanged OnTextChanged;
    void OnMultiLineEditableTextBoxChangedEvent(const FText& Text);
    FMultiLineEditableTextBoxOnTextCommitted OnTextCommitted;
    void OnMultiLineEditableTextBoxCommittedEvent(const FText& Text, uint8 CommitMethod);

    void SetTextStyle(const FTextBlockStyle& InTextStyle);
    void SetText(FText InText);
    void SetIsReadOnly(bool bReadOnly);
    void SetHintText(FText InHintText);
    void SetError(FText InError);
    void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, uint8 CommitMethod);
    void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
    FText GetHintText();
}

class UNamedSlot : UContentWidget
{
}

class UNamedSlotInterface : UInterface
{
}

class UNativeWidgetHost : UWidget
{
}

class UOverlay : UPanelWidget
{

    UOverlaySlot* AddChildToOverlay(UWidget* Content);
}

class UOverlaySlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UProgressBar : UWidget
{
    FProgressBarStyle WidgetStyle;
    USlateWidgetStyleAsset* Style;
    USlateBrushAsset* BackgroundImage;
    USlateBrushAsset* FillImage;
    USlateBrushAsset* MarqueeImage;
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
}

class URetainerBox : UContentWidget
{
    bool RenderOnInvalidation;
    bool RenderOnPhase;
    int32 Phase;
    int32 PhaseCount;
    UMaterialInterface* EffectMaterial;
    FName TextureParameter;

    void SetTextureParameter(FName TextureParameter);
    void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);
    void SetEffectMaterial(UMaterialInterface* EffectMaterial);
    void RequestRender();
    UMaterialInstanceDynamic* GetEffectMaterial();
}

class URichTextBlockImageDecorator : URichTextBlockDecorator
{
    UDataTable* ImageSet;
}

class USafeZone : UContentWidget
{
    bool PadLeft;
    bool PadRight;
    bool PadTop;
    bool PadBottom;

    void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
}

class USafeZoneSlot : UPanelSlot
{
    bool bIsTitleSafe;
    FMargin SafeAreaScale;
    TEnumAsByte<EHorizontalAlignment> HAlign;
    TEnumAsByte<EVerticalAlignment> VAlign;
    FMargin Padding;
}

class UScaleBox : UContentWidget
{
    TEnumAsByte<EStretch::Type> Stretch;
    TEnumAsByte<EStretchDirection::Type> StretchDirection;
    float UserSpecifiedScale;
    bool IgnoreInheritedScale;

    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    void SetStretchDirection(uint8 InStretchDirection);
    void SetStretch(uint8 InStretch);
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
}

class UScaleBoxSlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UScrollBar : UWidget
{
    FScrollBarStyle WidgetStyle;
    USlateWidgetStyleAsset* Style;
    bool bAlwaysShowScrollbar;
    bool bAlwaysShowScrollbarTrack;
    TEnumAsByte<EOrientation> Orientation;
    FVector2D Thickness;
    FMargin Padding;

    void SetState(float InOffsetFraction, float InThumbSizeFraction);
}

class UScrollBox : UPanelWidget
{
    FScrollBoxStyle WidgetStyle;
    FScrollBarStyle WidgetBarStyle;
    USlateWidgetStyleAsset* Style;
    USlateWidgetStyleAsset* BarStyle;
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
    void SetScrollOffset(float NewScrollOffset);
    void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);
    void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
    void SetScrollbarPadding(const FMargin& NewScrollbarPadding);
    void SetOrientation(uint8 NewOrientation);
    void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
    void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    void SetAllowOverscroll(bool NewAllowOverscroll);
    void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
    void ScrollToStart();
    void ScrollToEnd();
    float GetViewOffsetFraction();
    float GetScrollOffsetOfEnd();
    float GetScrollOffset();
    void EndInertialScrolling();
}

class UScrollBoxSlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class USizeBox : UContentWidget
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
}

class USizeBoxSlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class USlateBlueprintLibrary : UBlueprintFunctionLibrary
{

    FVector2D TransformVectorLocalToAbsolute(const FGeometry& Geometry, FVector2D LocalVector);
    FVector2D TransformVectorAbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteVector);
    float TransformScalarLocalToAbsolute(const FGeometry& Geometry, float LocalScalar);
    float TransformScalarAbsoluteToLocal(const FGeometry& Geometry, float AbsoluteScalar);
    void ScreenToWidgetLocal(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition);
    void ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition);
    void ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);
    void LocalToViewport(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    FVector2D LocalToAbsolute(const FGeometry& Geometry, FVector2D LocalCoordinate);
    bool IsUnderLocation(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate);
    FVector2D GetLocalTopLeft(const FGeometry& Geometry);
    FVector2D GetLocalSize(const FGeometry& Geometry);
    FVector2D GetAbsoluteSize(const FGeometry& Geometry);
    bool EqualEqual_SlateBrush(const FSlateBrush& A, const FSlateBrush& B);
    void AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    FVector2D AbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteCoordinate);
}

class USlateVectorArtData : UObject
{
    TArray<FSlateMeshVertex> VertexData;
    TArray<uint32> IndexData;
    UMaterialInterface* Material;
    FVector2D ExtentMin;
    FVector2D ExtentMax;
}

class USlateAccessibleWidgetData : UObject
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
}

class USlider : UWidget
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
}

class USpacer : UWidget
{
    FVector2D Size;

    void SetSize(FVector2D InSize);
}

class USpinBox : UWidget
{
    float Value;
    FSpinBoxValueDelegate ValueDelegate;
    float GetFloat();
    FSpinBoxStyle WidgetStyle;
    USlateWidgetStyleAsset* Style;
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
    void OnSpinBoxValueCommittedEvent(float InValue, uint8 CommitMethod);
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
    void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, uint8 CommitMethod);
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
}

class UTextBinding : UPropertyBinding
{

    FText GetTextValue();
    FString GetStringValue();
}

class UThrobber : UWidget
{
    int32 NumberOfPieces;
    bool bAnimateHorizontally;
    bool bAnimateVertically;
    bool bAnimateOpacity;
    USlateBrushAsset* PieceImage;
    FSlateBrush Image;

    void SetNumberOfPieces(int32 InNumberOfPieces);
    void SetAnimateVertically(bool bInAnimateVertically);
    void SetAnimateOpacity(bool bInAnimateOpacity);
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
}

class UTileView : UListView
{
    float EntryHeight;
    float EntryWidth;
    EListItemAlignment TileAlignment;
    bool bWrapHorizontalNavigation;

    void SetEntryWidth(float NewWidth);
    void SetEntryHeight(float NewHeight);
}

class UTreeView : UListView
{
    FTreeViewBP_OnGetItemChildren BP_OnGetItemChildren;
    void OnGetItemChildrenDynamic(UObject* Item, TArray<UObject*>& Children);
    FTreeViewBP_OnItemExpansionChanged BP_OnItemExpansionChanged;
    void OnItemExpansionChangedDynamic(UObject* Item, bool bIsExpanded);

    void SetItemExpansion(UObject* Item, bool bExpandItem);
    void ExpandAll();
    void CollapseAll();
}

class UUMGSequencePlayer : UObject
{
    UWidgetAnimation* Animation;

    void SetUserTag(FName InUserTag);
    FName GetUserTag();
}

class UUniformGridPanel : UPanelWidget
{
    FMargin SlotPadding;
    float MinDesiredSlotWidth;
    float MinDesiredSlotHeight;

    void SetSlotPadding(FMargin InSlotPadding);
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32 InRow, int32 InColumn);
}

class UUniformGridSlot : UPanelSlot
{
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    int32 Row;
    int32 Column;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetRow(int32 InRow);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
    void SetColumn(int32 InColumn);
}

class UVerticalBox : UPanelWidget
{

    UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);
}

class UVerticalBoxSlot : UPanelSlot
{
    FSlateChildSize Size;
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetSize(FSlateChildSize InSize);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UViewport : UContentWidget
{
    FLinearColor BackgroundColor;

    AActor* Spawn(TSubclassOf<AActor> ActorClass);
    void SetViewRotation(FRotator Rotation);
    void SetViewLocation(FVector Location);
    FRotator GetViewRotation();
    UWorld* GetViewportWorld();
    FVector GetViewLocation();
}

class UVisibilityBinding : UPropertyBinding
{

    ESlateVisibility GetValue();
}

class UWidgetAnimation : UMovieSceneSequence
{
    UMovieScene* MovieScene;
    TArray<FWidgetAnimationBinding> AnimationBindings;
    bool bLegacyFinishOnStop;
    FString DisplayLabel;

    void UnbindFromAnimationStarted(UUserWidget* Widget, WidgetAnimationDynamicEvent__DelegateSignature Delegate);
    void UnbindFromAnimationFinished(UUserWidget* Widget, WidgetAnimationDynamicEvent__DelegateSignature Delegate);
    void UnbindAllFromAnimationStarted(UUserWidget* Widget);
    void UnbindAllFromAnimationFinished(UUserWidget* Widget);
    float GetStartTime();
    float GetEndTime();
    void BindToAnimationStarted(UUserWidget* Widget, WidgetAnimationDynamicEvent__DelegateSignature Delegate);
    void BindToAnimationFinished(UUserWidget* Widget, WidgetAnimationDynamicEvent__DelegateSignature Delegate);
}

class UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding
{
    TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;
}

class UWidgetAnimationPlayCallbackProxy : UObject
{
    FWidgetAnimationPlayCallbackProxyFinished Finished;
    void WidgetAnimationResult();

    UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, uint8 PlayMode, float PlaybackSpeed);
    UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, uint8 PlayMode, float PlaybackSpeed);
}

class UWidgetBinding : UPropertyBinding
{

    UWidget* GetValue();
}

class UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
{
    UWidgetTree* WidgetTree;
    uint8 bAllowTemplate;
    uint8 bAllowDynamicCreation;
    uint8 bValidTemplate;
    uint8 bTemplateInitialized;
    uint8 bCookedTemplate;
    uint8 bClassRequiresNativeTick;
    TArray<FDelegateRuntimeBinding> Bindings;
    TArray<UWidgetAnimation*> Animations;
    TArray<FName> NamedSlots;
    TSoftObjectPtr<UUserWidget> TemplateAsset;
    UUserWidget* Template;
}

class UWidgetBlueprintLibrary : UBlueprintFunctionLibrary
{

    FEventReply UnlockMouse(FEventReply& Reply);
    FEventReply Unhandled();
    void SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
    void SetWindowTitleBarOnCloseClickedDelegate(OnGameWindowCloseButtonClickedDelegate__DelegateSignature Delegate);
    void SetWindowTitleBarCloseButtonActive(bool bActive);
    FEventReply SetUserFocus(FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers);
    FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);
    void SetInputMode_UIOnlyEx(UPlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
    void SetInputMode_UIOnly(UPlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport);
    void SetInputMode_GameOnly(UPlayerController* PlayerController);
    void SetInputMode_GameAndUIEx(UPlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
    void SetInputMode_GameAndUI(UPlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
    bool SetHardwareCursor(UObject* WorldContextObject, uint8 CursorShape, FName CursorName, FVector2D HotSpot);
    void SetFocusToGameViewport();
    void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
    void SetBrushResourceToTexture(FSlateBrush& Brush, UTexture2D* Texture);
    void SetBrushResourceToMaterial(FSlateBrush& Brush, UMaterialInterface* Material);
    void RestorePreviousWindowTitleBarState();
    FEventReply ReleaseMouseCapture(FEventReply& Reply);
    FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);
    void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
    FSlateBrush NoResourceBrush();
    FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int32 Width, int32 Height);
    FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int32 Width, int32 Height);
    FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset);
    FEventReply LockMouse(FEventReply& Reply, UWidget* CapturingWidget);
    bool IsDragDropping();
    FEventReply Handled();
    void GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding);
    FKeyEvent GetKeyEventFromAnalogInputEvent(const FAnalogInputEvent& Event);
    FInputEvent GetInputEventFromPointerEvent(const FPointerEvent& Event);
    FInputEvent GetInputEventFromNavigationEvent(const FNavigationEvent& Event);
    FInputEvent GetInputEventFromKeyEvent(const FKeyEvent& Event);
    FInputEvent GetInputEventFromCharacterEvent(const FCharacterEvent& Event);
    UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);
    UDragDropOperation* GetDragDroppingContent();
    UTexture2D* GetBrushResourceAsTexture2D(const FSlateBrush& Brush);
    UMaterialInterface* GetBrushResourceAsMaterial(const FSlateBrush& Brush);
    UObject* GetBrushResource(const FSlateBrush& Brush);
    void GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UInterface> Interface, bool TopLevelOnly);
    void GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly);
    FEventReply EndDragDrop(FEventReply& Reply);
    void DrawTextFormatted(FPaintContext& Context, const FText& Text, FVector2D Position, UFont* Font, int32 FontSize, FName FontTypeFace, FLinearColor Tint);
    void DrawText(FPaintContext& Context, FString inString, FVector2D Position, FLinearColor Tint);
    void DrawLines(FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness);
    void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness);
    void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint);
    void DismissAllMenus();
    FEventReply DetectDragIfPressed(const FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey);
    FEventReply DetectDrag(FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey);
    UDragDropOperation* CreateDragDropOperation(TSubclassOf<UDragDropOperation> OperationClass);
    UUserWidget* Create(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, UPlayerController* OwningPlayer);
    FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);
    FEventReply CaptureMouse(FEventReply& Reply, UWidget* CapturingWidget);
    FEventReply CaptureJoystick(FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks);
    void CancelDragDrop();
}

class UWidgetInteractionComponent : USceneComponent
{
    FWidgetInteractionComponentOnHoveredWidgetChanged OnHoveredWidgetChanged;
    void OnHoveredWidgetChanged(UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent);
    int32 VirtualUserIndex;
    float PointerIndex;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    float InteractionDistance;
    EWidgetInteractionSource InteractionSource;
    bool bEnableHitTesting;
    bool bShowDebug;
    FLinearColor DebugColor;
    FHitResult CustomHitResult;
    FVector2D LocalHitLocation;
    FVector2D LastLocalHitLocation;
    UWidgetComponent* HoveredWidgetComponent;
    FHitResult LastHitResult;
    bool bIsHoveredWidgetInteractable;
    bool bIsHoveredWidgetFocusable;
    bool bIsHoveredWidgetHitTestVisible;

    void SetFocus(UWidget* FocusWidget);
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
    UWidgetComponent* GetHoveredWidgetComponent();
    FVector2D Get2DHitLocation();
}

class UWidgetLayoutLibrary : UBlueprintFunctionLibrary
{

    UWrapBoxSlot* SlotAsWrapBoxSlot(UWidget* Widget);
    UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(UWidget* Widget);
    UVerticalBoxSlot* SlotAsVerticalBoxSlot(UWidget* Widget);
    UUniformGridSlot* SlotAsUniformGridSlot(UWidget* Widget);
    USizeBoxSlot* SlotAsSizeBoxSlot(UWidget* Widget);
    UScrollBoxSlot* SlotAsScrollBoxSlot(UWidget* Widget);
    UScaleBoxSlot* SlotAsScaleBoxSlot(UWidget* Widget);
    USafeZoneSlot* SlotAsSafeBoxSlot(UWidget* Widget);
    UOverlaySlot* SlotAsOverlaySlot(UWidget* Widget);
    UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(UWidget* Widget);
    UGridSlot* SlotAsGridSlot(UWidget* Widget);
    UCanvasPanelSlot* SlotAsCanvasSlot(UWidget* Widget);
    UBorderSlot* SlotAsBorderSlot(UWidget* Widget);
    void RemoveAllWidgets(UObject* WorldContextObject);
    bool ProjectWorldLocationToWidgetPosition(UPlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    FGeometry GetViewportWidgetGeometry(UObject* WorldContextObject);
    FVector2D GetViewportSize(UObject* WorldContextObject);
    float GetViewportScale(UObject* WorldContextObject);
    FGeometry GetPlayerScreenWidgetGeometry(UPlayerController* PlayerController);
    bool GetMousePositionScaledByDPI(UPlayerController* Player, float& LocationX, float& LocationY);
    FVector2D GetMousePositionOnViewport(UObject* WorldContextObject);
    FVector2D GetMousePositionOnPlatform();
}

class UWidgetNavigation : UObject
{
    FWidgetNavigationData Up;
    FWidgetNavigationData Down;
    FWidgetNavigationData Left;
    FWidgetNavigationData Right;
    FWidgetNavigationData Next;
    FWidgetNavigationData Previous;
}

class UWidgetSwitcher : UPanelWidget
{
    int32 ActiveWidgetIndex;

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(UWidget* Widget);
    UWidget* GetWidgetAtIndex(int32 Index);
    int32 GetNumWidgets();
    int32 GetActiveWidgetIndex();
    UWidget* GetActiveWidget();
}

class UWidgetSwitcherSlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UWidgetTree : UObject
{
    UWidget* RootWidget;
}

class UWindowTitleBarArea : UContentWidget
{
    bool bWindowButtonsEnabled;
    bool bDoubleClickTogglesFullscreen;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UWindowTitleBarAreaSlot : UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
}

class UWrapBox : UPanelWidget
{
    FVector2D InnerSlotPadding;
    float WrapWidth;
    bool bExplicitWrapWidth;

    void SetInnerSlotPadding(FVector2D InPadding);
    UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);
}

class UWrapBoxSlot : UPanelSlot
{
    FMargin Padding;
    bool bFillEmptySpace;
    float FillSpanWhenLessThan;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(uint8 InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(uint8 InHorizontalAlignment);
    void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
    void SetFillEmptySpace(bool InbFillEmptySpace);
}

struct FEventReply
{
}

struct FWidgetTransform
{
    FVector2D Translation;
    FVector2D Scale;
    FVector2D Shear;
    float Angle;
}

struct FPaintContext
{
}

struct FShapedTextOptions
{
    uint8 bOverride_TextShapingMethod;
    uint8 bOverride_TextFlowDirection;
    ETextShapingMethod TextShapingMethod;
    ETextFlowDirection TextFlowDirection;
}

struct FAnimationEventBinding
{
    UWidgetAnimation* Animation;
    FAnimationEventBindingDelegate Delegate;
    void WidgetAnimationDynamicEvent();
    EWidgetAnimationEvent AnimationEvent;
    FName UserTag;
}

struct FNamedSlotBinding
{
    FName Name;
    UWidget* Content;
}

struct FAnchorData
{
    FMargin Offsets;
    FAnchors Anchors;
    FVector2D Alignment;
}

struct FDynamicPropertyPath : FCachedPropertyPath
{
}

struct FMovieScene2DTransformMask
{
    uint32 Mask;
}

struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;
    FMovieSceneFloatChannel Shear;
    EMovieSceneBlendType BlendType;
    FMovieScene2DTransformMask Mask;
}

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel TopCurve;
    FMovieSceneFloatChannel LeftCurve;
    FMovieSceneFloatChannel RightCurve;
    FMovieSceneFloatChannel BottomCurve;
    EMovieSceneBlendType BlendType;
}

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
    TArray<FName> BrushPropertyNamePath;
}

struct FRichTextStyleRow : FTableRowBase
{
    FTextBlockStyle TextStyle;
}

struct FRichImageRow : FTableRowBase
{
    FSlateBrush Brush;
}

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
}

struct FSlateChildSize
{
    float Value;
    TEnumAsByte<ESlateSizeRule::Type> SizeRule;
}

struct FUserWidgetPool
{
    TArray<UUserWidget*> ActiveWidgets;
    TArray<UUserWidget*> InactiveWidgets;
}

struct FWidgetAnimationBinding
{
    FName WidgetName;
    FName SlotWidgetName;
    FGuid AnimationGuid;
    bool bIsRootWidget;
}

struct FBlueprintWidgetAnimationDelegateBinding
{
    EWidgetAnimationEvent Action;
    FName AnimationToBind;
    FName FunctionNameToBind;
    FName UserTag;
}

struct FDelegateRuntimeBinding
{
    FString ObjectName;
    FName PropertyName;
    FName FunctionName;
    FDynamicPropertyPath SourcePath;
    EBindingKind Kind;
}

struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{
}

struct FWidgetNavigationData
{
    EUINavigationRule Rule;
    FName WidgetToFocus;
    TWeakObjectPtr<UWidget> Widget;
    FWidgetNavigationDataCustomDelegate CustomDelegate;
    UWidget* CustomWidgetNavigationDelegate(EUINavigation Navigation);
}

class UDefault__WidgetBlueprintGeneratedClass
{
}

#endif
