// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x108 (Inherited: 0x28)
struct UWidget : UVisual {
	UPanelSlot* Slot; // 0x28(0x08)
	FDelegate bIsEnabledDelegate; // 0x30(0x10)
	FText ToolTipText; // 0x40(0x18)
	FDelegate ToolTipTextDelegate; // 0x58(0x10)
	UWidget* ToolTipWidget; // 0x68(0x08)
	FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	FDelegate VisibilityDelegate; // 0x80(0x10)
	FWidgetTransform RenderTransform; // 0x90(0x1c)
	FVector2D RenderTransformPivot; // 0xac(0x08)
	char bIsVariable : 1; // 0xb4(0x01)
	char bCreatedByConstructionScript : 1; // 0xb4(0x01)
	char bIsEnabled : 1; // 0xb4(0x01)
	char bOverride_Cursor : 1; // 0xb4(0x01)
	USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8(0x08)
	char bIsVolatile : 1; // 0xc0(0x01)
	enum class EMouseCursor Cursor; // 0xc1(0x01)
	enum class EWidgetClipping Clipping; // 0xc2(0x01)
	enum class ESlateVisibility Visibility; // 0xc3(0x01)
	float RenderOpacity; // 0xc4(0x04)
	UWidgetNavigation* Navigation; // 0xc8(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xd0(0x01)
	TArray<UPropertyBinding*> NativeBindings; // 0xf8(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility);
	void SetUserFocus(APlayerController* PlayerController);
	void SetToolTipText(FText InToolTipText);
	void SetToolTip(UWidget* Widget);
	void SetRenderTranslation(FVector2D Translation);
	void SetRenderTransformPivot(FVector2D Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(FWidgetTransform InTransform);
	void SetRenderShear(FVector2D Shear);
	void SetRenderScale(FVector2D Scale);
	void SetRenderOpacity(float InOpacity);
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, UWidget* InWidget);
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, FDelegate InCustomDelegate);
	void SetNavigationRuleCustom(enum class EUINavigation Direction, FDelegate InCustomDelegate);
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule);
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, FName WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetFocus();
	void SetCursor(enum class EMouseCursor InCursor);
	void SetClipping(enum class EWidgetClipping InClipping);
	void SetAllNavigationRules(enum class EUINavigationRule Rule, FName WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	FEventReply OnReply__DelegateSignature();
	FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(APlayerController* PlayerController);
	bool HasUserFocus(APlayerController* PlayerController);
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	UWidget* GetWidget__DelegateSignature();
	enum class ESlateVisibility GetVisibility();
	FGeometry GetTickSpaceGeometry();
	FText GetText__DelegateSignature();
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature();
	FSlateColor GetSlateColor__DelegateSignature();
	FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	UPanelWidget* GetParent();
	FGeometry GetPaintSpaceGeometry();
	APlayerController* GetOwningPlayer();
	ULocalPlayer* GetOwningLocalPlayer();
	enum class EMouseCursor GetMouseCursor__DelegateSignature();
	FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int32_t GetInt32__DelegateSignature();
	UGameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	FVector2D GetDesiredSize();
	enum class EWidgetClipping GetClipping();
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature();
	FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	UWidget* GenerateWidgetForString__DelegateSignature(FString Item);
	UWidget* GenerateWidgetForObject__DelegateSignature(UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// Class UMG.UserWidget
// Size: 0x230 (Inherited: 0x108)
struct UUserWidget : UWidget {
	FLinearColor ColorAndOpacity; // 0x110(0x10)
	FDelegate ColorAndOpacityDelegate; // 0x120(0x10)
	FSlateColor ForegroundColor; // 0x130(0x28)
	FDelegate ForegroundColorDelegate; // 0x158(0x10)
	FMargin Padding; // 0x168(0x10)
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x178(0x10)
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x188(0x10)
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x198(0x10)
	UWidgetTree* WidgetTree; // 0x1a8(0x08)
	int32_t Priority; // 0x1b0(0x04)
	char bSupportsKeyboardFocus : 1; // 0x1b4(0x01)
	char bIsFocusable : 1; // 0x1b4(0x01)
	char bStopAction : 1; // 0x1b4(0x01)
	char bHasScriptImplementedTick : 1; // 0x1b4(0x01)
	char bHasScriptImplementedPaint : 1; // 0x1b4(0x01)
	char pad_1AC_5 : 2; // 0x1ac(0x01)
	char bCookedWidgetTree : 1; // 0x1b4(0x01)
	enum class EWidgetTickFrequency TickFrequency; // 0x1c0(0x01)
	UInputComponent* InputComponent; // 0x1c8(0x08)
	TArray<FAnimationEventBinding> AnimationCallbacks; // 0x1d0(0x10)

	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(UWidgetAnimation* Animation, FDelegate Delegate);
	void UnbindFromAnimationFinished(UWidgetAnimation* Animation, FDelegate Delegate);
	void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(FName ActionName, enum class EInputEvent EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(FMargin InPadding);
	void SetOwningPlayer(APlayerController* LocalPlayerController);
	void SetNumLoopsToPlay(UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);
	void SetInputActionPriority(int32_t NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(FSlateColor InForegroundColor);
	void SetDesiredSizeInViewport(FVector2D Size);
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);
	void SetAnchorsInViewport(FAnchors Anchors);
	void SetAlignmentInViewport(FVector2D Alignment);
	void ReverseAnimation(UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(USoundBase* SoundToPlay);
	UUMGSequencePlayer* PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
	UUMGSequencePlayer* PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	UUMGSequencePlayer* PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	UUMGSequencePlayer* PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
	float PauseAnimation(UWidgetAnimation* InAnimation);
	FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent InTouchEvent);
	FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent InTouchEvent);
	FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent GestureEvent);
	FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent InTouchEvent);
	FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent InTouchEvent);
	void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
	FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnPaint(FPaintContext Context);
	FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseCaptureLost();
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent InMouseEvent);
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
	void OnDragDetected(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
	void OnDragCancelled(FPointerEvent PointerEvent, UDragDropOperation* Operation);
	void OnAnimationStarted(UWidgetAnimation* Animation);
	void OnAnimationFinished(UWidgetAnimation* Animation);
	FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
	void OnAddedToFocusPath(FFocusEvent InFocusEvent);
	void ListenForInputAction(FName ActionName, enum class EInputEvent EventType, bool bConsume, FDelegate Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(FName ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(UWidgetAnimation* InAnimation);
	APawn* GetOwningPlayerPawn();
	bool GetIsVisible();
	float GetAnimationCurrentTime(UWidgetAnimation* InAnimation);
	FAnchors GetAnchorsInViewport();
	FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(UWidgetAnimation* Animation, FDelegate Delegate);
	void BindToAnimationFinished(UWidgetAnimation* Animation, FDelegate Delegate);
	void BindToAnimationEvent(UWidgetAnimation* Animation, FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, FName UserTag);
	void AddToViewport(int32_t ZOrder);
	bool AddToPlayerScreen(int32_t ZOrder);
};

// Class UMG.RichTextBlockDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.WidgetComponent
// Size: 0x540 (Inherited: 0x420)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x418(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x419(0x01)
	UUserWidget* WidgetClass; // 0x420(0x08)
	FIntPoint DrawSize; // 0x428(0x08)
	bool bManuallyRedraw; // 0x430(0x01)
	bool bRedrawRequested; // 0x431(0x01)
	float RedrawTime; // 0x434(0x04)
	FIntPoint CurrentDrawSize; // 0x440(0x08)
	bool bDrawAtDesiredSize; // 0x448(0x01)
	FVector2D Pivot; // 0x44c(0x08)
	bool bReceiveHardwareInput; // 0x454(0x01)
	bool bWindowFocusable; // 0x455(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x456(0x01)
	bool bApplyGammaCorrection; // 0x457(0x01)
	ULocalPlayer* OwnerPlayer; // 0x458(0x08)
	FLinearColor BackgroundColor; // 0x460(0x10)
	FLinearColor TintColorAndOpacity; // 0x470(0x10)
	float OpacityFromTexture; // 0x480(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x484(0x01)
	bool bIsTwoSided; // 0x485(0x01)
	bool TickWhenOffscreen; // 0x486(0x01)
	UUserWidget* Widget; // 0x488(0x08)
	UBodySetup* BodySetup; // 0x4b0(0x08)
	UMaterialInterface* TranslucentMaterial; // 0x4b8(0x08)
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x4c0(0x08)
	UMaterialInterface* OpaqueMaterial; // 0x4c8(0x08)
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x4d0(0x08)
	UMaterialInterface* MaskedMaterial; // 0x4d8(0x08)
	UMaterialInterface* MaskedMaterial_OneSided; // 0x4e0(0x08)
	UTextureRenderTarget2D* RenderTarget; // 0x4e8(0x08)
	UMaterialInstanceDynamic* MaterialInstance; // 0x4f0(0x08)
	bool bAddedToScreen; // 0x4f8(0x01)
	bool bEditTimeUsable; // 0x4f9(0x01)
	FName SharedLayerName; // 0x4fc(0x08)
	int32_t LayerZOrder; // 0x504(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x508(0x01)
	float CylinderArcAngle; // 0x50c(0x04)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility);
	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(enum class EWidgetSpace NewSpace);
	void SetWidget(UUserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetRedrawTime(float InRedrawTime);
	void SetPivot(FVector2D InPivot);
	void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(FVector2D Size);
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(FLinearColor NewBackgroundColor);
	void RequestRedraw();
	enum class EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	enum class EWidgetSpace GetWidgetSpace();
	UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	FVector2D GetPivot();
	ULocalPlayer* GetOwnerPlayer();
	UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	enum class EWidgetGeometryMode GetGeometryMode();
	FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	FVector2D GetCurrentDrawSize();
};

// Class UMG.TextLayoutWidget
// Size: 0x128 (Inherited: 0x108)
struct UTextLayoutWidget : UWidget {
	FShapedTextOptions ShapedTextOptions; // 0x108(0x03)
	enum class ETextJustify Justification; // 0x10b(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x10c(0x01)
	char AutoWrapText : 1; // 0x10d(0x01)
	float WrapTextAt; // 0x110(0x04)
	FMargin Margin; // 0x114(0x10)
	float LineHeightPercentage; // 0x124(0x04)

	void SetJustification(enum class ETextJustify InJustification);
};

// Class UMG.TextBlock
// Size: 0x2a0 (Inherited: 0x128)
struct UTextBlock : UTextLayoutWidget {
	FText Text; // 0x128(0x18)
	FDelegate TextDelegate; // 0x140(0x10)
	FSlateColor ColorAndOpacity; // 0x150(0x28)
	FDelegate ColorAndOpacityDelegate; // 0x178(0x10)
	FSlateFontInfo Font; // 0x188(0x50)
	FSlateBrush StrikeBrush; // 0x1d8(0x88)
	FVector2D ShadowOffset; // 0x260(0x08)
	FLinearColor ShadowColorAndOpacity; // 0x268(0x10)
	FDelegate ShadowColorAndOpacityDelegate; // 0x278(0x10)
	float MinDesiredWidth; // 0x288(0x04)
	bool bWrapWithInvalidationPanel; // 0x28c(0x01)
	bool bAutoWrapText; // 0x28d(0x01)
	bool bSimpleTextMode; // 0x28e(0x01)

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
};

// Class UMG.RichTextBlock
// Size: 0x668 (Inherited: 0x128)
struct URichTextBlock : UTextLayoutWidget {
	FText Text; // 0x128(0x18)
	UDataTable* TextStyleSet; // 0x140(0x08)
	TArray<URichTextBlockDecorator*> DecoratorClasses; // 0x148(0x10)
	bool bOverrideDefaultStyle; // 0x158(0x01)
	FTextBlockStyle DefaultTextStyleOverride; // 0x160(0x268)
	float MinDesiredWidth; // 0x3c8(0x04)
	TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x638(0x10)

	void SetTextStyleSet(UDataTable* NewTextStyleSet);
	void SetText(FText InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetDefaultTextStyle(FTextBlockStyle InDefaultTextStyle);
	void SetDefaultStrikeBrush(FSlateBrush InStrikeBrush);
	void SetDefaultShadowOffset(FVector2D InShadowOffset);
	void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
	void SetDefaultFont(FSlateFontInfo InFontInfo);
	void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	FText GetText();
	URichTextBlockDecorator* GetDecoratorByClass(URichTextBlockDecorator* DecoratorClass);
	void ClearAllDefaultStyleOverrides();
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFail; // 0x40(0x10)

	UAsyncTaskDownloadImage* DownloadImage(FString URL);
};

// Class UMG.PanelWidget
// Size: 0x120 (Inherited: 0x108)
struct UPanelWidget : UWidget {
	TArray<UPanelSlot*> Slots; // 0x108(0x10)

	bool RemoveChildAt(int32_t Index);
	bool RemoveChild(UWidget* Content);
	bool HasChild(UWidget* Content);
	bool HasAnyChildren();
	int32_t GetChildrenCount();
	int32_t GetChildIndex(UWidget* Content);
	UWidget* GetChildAt(int32_t Index);
	TArray<UWidget*> GetAllChildren();
	void ClearChildren();
	UPanelSlot* AddChild(UWidget* Content);
};

// Class UMG.ContentWidget
// Size: 0x120 (Inherited: 0x120)
struct UContentWidget : UPanelWidget {

	UPanelSlot* SetContent(UWidget* Content);
	UPanelSlot* GetContentSlot();
	UWidget* GetContent();
};

// Class UMG.BackgroundBlur
// Size: 0x1d8 (Inherited: 0x120)
struct UBackgroundBlur : UContentWidget {
	FMargin Padding; // 0x120(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x130(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x131(0x01)
	bool bApplyAlphaToBlur; // 0x132(0x01)
	float BlurStrength; // 0x134(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x138(0x01)
	int32_t BlurRadius; // 0x13c(0x04)
	FSlateBrush LowQualityFallbackBrush; // 0x140(0x88)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetLowQualityFallbackBrush(FSlateBrush InBrush);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int32_t InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	UPanelWidget* Parent; // 0x28(0x08)
	UWidget* Content; // 0x30(0x08)
};

// Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : UObject {
	TWeakObjectPtr<UObject> SourceObject; // 0x28(0x08)
	FDynamicPropertyPath SourcePath; // 0x30(0x28)
	FName DestinationProperty; // 0x58(0x08)
};

// Class UMG.BoolBinding
// Size: 0x60 (Inherited: 0x60)
struct UBoolBinding : UPropertyBinding {

	bool GetValue();
};

// Class UMG.Border
// Size: 0x270 (Inherited: 0x120)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x120(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x121(0x01)
	char bShowEffectWhenDisabled : 1; // 0x122(0x01)
	FLinearColor ContentColorAndOpacity; // 0x124(0x10)
	FDelegate ContentColorAndOpacityDelegate; // 0x134(0x10)
	FMargin Padding; // 0x144(0x10)
	FSlateBrush Background; // 0x158(0x88)
	FDelegate BackgroundDelegate; // 0x1e0(0x10)
	FLinearColor BrushColor; // 0x1f0(0x10)
	FDelegate BrushColorDelegate; // 0x200(0x10)
	FVector2D DesiredSizeScale; // 0x210(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x218(0x01)
	FDelegate OnMouseButtonDownEvent; // 0x21c(0x10)
	FDelegate OnMouseButtonUpEvent; // 0x22c(0x10)
	FDelegate OnMouseMoveEvent; // 0x23c(0x10)
	FDelegate OnMouseDoubleClickEvent; // 0x24c(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetDesiredSizeScale(FVector2D InScale);
	void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
	void SetBrushFromTexture(UTexture2D* Texture);
	void SetBrushFromMaterial(UMaterialInterface* Material);
	void SetBrushFromAsset(USlateBrushAsset* Asset);
	void SetBrushColor(FLinearColor InBrushColor);
	void SetBrush(FSlateBrush InBrush);
	UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding {

	FSlateBrush GetValue();
};

// Class UMG.Button
// Size: 0x428 (Inherited: 0x120)
struct UButton : UContentWidget {
	USlateWidgetStyleAsset* Style; // 0x120(0x08)
	FButtonStyle WidgetStyle; // 0x128(0x278)
	FLinearColor ColorAndOpacity; // 0x3a0(0x10)
	FLinearColor BackgroundColor; // 0x3b0(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x3c0(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x3c1(0x01)
	enum class EButtonPressMethod PressMethod; // 0x3c2(0x01)
	bool IsFocusable; // 0x3c3(0x01)
	FMulticastInlineDelegate OnClicked; // 0x3c8(0x10)
	FMulticastInlineDelegate OnPressed; // 0x3d8(0x10)
	FMulticastInlineDelegate OnReleased; // 0x3e8(0x10)
	FMulticastInlineDelegate OnHovered; // 0x3f8(0x10)
	FMulticastInlineDelegate OnUnhovered; // 0x408(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(FButtonStyle InStyle);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetBackgroundColor(FLinearColor InBackgroundColor);
	bool IsPressed();
};

// Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.CanvasPanel
// Size: 0x130 (Inherited: 0x120)
struct UCanvasPanel : UPanelWidget {

	UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);
};

// Class UMG.CanvasPanelSlot
// Size: 0x70 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot {
	FAnchorData LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	int32_t ZOrder; // 0x64(0x04)

	void SetZOrder(int32_t InZOrder);
	void SetSize(FVector2D InSize);
	void SetPosition(FVector2D InPosition);
	void SetOffsets(FMargin InOffset);
	void SetMinimum(FVector2D InMinimumAnchors);
	void SetMaximum(FVector2D InMaximumAnchors);
	void SetLayout(FAnchorData InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(FAnchors InAnchors);
	void SetAlignment(FVector2D InAlignment);
	int32_t GetZOrder();
	FVector2D GetSize();
	FVector2D GetPosition();
	FMargin GetOffsets();
	FAnchorData GetLayout();
	bool GetAutoSize();
	FAnchors GetAnchors();
	FVector2D GetAlignment();
};

// Class UMG.CheckBox
// Size: 0x770 (Inherited: 0x120)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x120(0x01)
	FDelegate CheckedStateDelegate; // 0x124(0x10)
	FCheckBoxStyle WidgetStyle; // 0x138(0x580)
	USlateWidgetStyleAsset* Style; // 0x6b8(0x08)
	USlateBrushAsset* UncheckedImage; // 0x6c0(0x08)
	USlateBrushAsset* UncheckedHoveredImage; // 0x6c8(0x08)
	USlateBrushAsset* UncheckedPressedImage; // 0x6d0(0x08)
	USlateBrushAsset* CheckedImage; // 0x6d8(0x08)
	USlateBrushAsset* CheckedHoveredImage; // 0x6e0(0x08)
	USlateBrushAsset* CheckedPressedImage; // 0x6e8(0x08)
	USlateBrushAsset* UndeterminedImage; // 0x6f0(0x08)
	USlateBrushAsset* UndeterminedHoveredImage; // 0x6f8(0x08)
	USlateBrushAsset* UndeterminedPressedImage; // 0x700(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x708(0x01)
	FMargin Padding; // 0x70c(0x10)
	FSlateColor BorderBackgroundColor; // 0x720(0x28)
	bool IsFocusable; // 0x748(0x01)
	FMulticastInlineDelegate OnCheckStateChanged; // 0x750(0x10)

	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(enum class ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
};

// Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding {

	enum class ECheckBoxState GetValue();
};

// Class UMG.CircularThrobber
// Size: 0x1c0 (Inherited: 0x108)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108(0x04)
	float Period; // 0x10c(0x04)
	float Radius; // 0x110(0x04)
	USlateBrushAsset* PieceImage; // 0x118(0x08)
	FSlateBrush Image; // 0x120(0x88)
	bool bEnableRadius; // 0x1a8(0x01)

	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int32_t InNumberOfPieces);
};

// Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : UPropertyBinding {

	FSlateColor GetSlateValue();
	FLinearColor GetLinearValue();
};

// Class UMG.ComboBox
// Size: 0x140 (Inherited: 0x108)
struct UComboBox : UWidget {
	TArray<UObject*> Items; // 0x108(0x10)
	FDelegate OnGenerateWidgetEvent; // 0x118(0x10)
	bool bIsFocusable; // 0x128(0x01)
};

// Class UMG.ComboBoxString
// Size: 0xdf8 (Inherited: 0x108)
struct UComboBoxString : UWidget {
	TArray<FString> DefaultOptions; // 0x108(0x10)
	FString SelectedOption; // 0x118(0x10)
	FComboBoxStyle WidgetStyle; // 0x128(0x3f0)
	FTableRowStyle ItemStyle; // 0x518(0x7c8)
	FMargin ContentPadding; // 0xce0(0x10)
	float MaxListHeight; // 0xcf0(0x04)
	bool HasDownArrow; // 0xcf4(0x01)
	bool EnableGamepadNavigationMode; // 0xcf5(0x01)
	FSlateFontInfo Font; // 0xcf8(0x50)
	FSlateColor ForegroundColor; // 0xd48(0x28)
	bool bIsFocusable; // 0xd70(0x01)
	FDelegate OnGenerateWidgetEvent; // 0xd74(0x10)
	FMulticastInlineDelegate OnSelectionChanged; // 0xd88(0x10)
	FMulticastInlineDelegate OnOpening; // 0xd98(0x10)

	void SetSelectedOption(FString Option);
	void SetSelectedIndex(int32_t Index);
	bool RemoveOption(FString Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, enum class ESelectInfo SelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	FString GetSelectedOption();
	int32_t GetSelectedIndex();
	int32_t GetOptionCount();
	FString GetOptionAtIndex(int32_t Index);
	int32_t FindOptionIndex(FString Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(FString Option);
};

// Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	FString Tag; // 0x28(0x10)
	UObject* Payload; // 0x38(0x08)
	UWidget* DefaultDragVisual; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	FVector2D Offset; // 0x4c(0x08)
	FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	FMulticastInlineDelegate OnDragged; // 0x78(0x10)

	void Drop(FPointerEvent PointerEvent);
	void Dragged(FPointerEvent PointerEvent);
	void DragCancelled(FPointerEvent PointerEvent);
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x1c8 (Inherited: 0x108)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x108(0x01)
	FVector2D EntrySpacing; // 0x10c(0x08)
	TArray<FVector2D> SpacingPattern; // 0x118(0x10)
	FSlateChildSize EntrySizeRule; // 0x128(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x130(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x131(0x01)
	int32_t MaxElementSize; // 0x134(0x04)
	FUserWidgetPool EntryWidgetPool; // 0x148(0x80)

	void SetEntrySpacing(FVector2D InEntrySpacing);
	int32_t GetNumEntries();
	TArray<UUserWidget*> GetAllEntries();
};

// Class UMG.DynamicEntryBox
// Size: 0x1d0 (Inherited: 0x1c8)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	UUserWidget* EntryWidgetClass; // 0x1c8(0x08)

	void Reset(bool bDeleteWidgets);
	void RemoveEntry(UUserWidget* EntryWidget);
	UUserWidget* BP_CreateEntryOfClass(UUserWidget* EntryClass);
	UUserWidget* BP_CreateEntry();
};

// Class UMG.EditableText
// Size: 0x450 (Inherited: 0x108)
struct UEditableText : UWidget {
	FText Text; // 0x108(0x18)
	FDelegate TextDelegate; // 0x120(0x10)
	FText HintText; // 0x130(0x18)
	FDelegate HintTextDelegate; // 0x148(0x10)
	FEditableTextStyle WidgetStyle; // 0x158(0x218)
	USlateWidgetStyleAsset* Style; // 0x370(0x08)
	USlateBrushAsset* BackgroundImageSelected; // 0x378(0x08)
	USlateBrushAsset* BackgroundImageComposing; // 0x380(0x08)
	USlateBrushAsset* CaretImage; // 0x388(0x08)
	FSlateFontInfo Font; // 0x390(0x50)
	FSlateColor ColorAndOpacity; // 0x3e0(0x28)
	bool IsReadOnly; // 0x408(0x01)
	bool IsPassword; // 0x409(0x01)
	float MinimumDesiredWidth; // 0x40c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x410(0x01)
	bool SelectAllTextWhenFocused; // 0x411(0x01)
	bool RevertTextOnEscape; // 0x412(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x413(0x01)
	bool SelectAllTextOnCommit; // 0x414(0x01)
	bool AllowContextMenu; // 0x415(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x416(0x01)
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x417(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x418(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x419(0x01)
	enum class ETextJustify Justification; // 0x41a(0x01)
	FShapedTextOptions ShapedTextOptions; // 0x41b(0x03)
	FMulticastInlineDelegate OnTextChanged; // 0x420(0x10)
	FMulticastInlineDelegate OnTextCommitted; // 0x430(0x10)

	void SetText(FText InText);
	void SetJustification(enum class ETextJustify InJustification);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(FText InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(FText Text);
	FText GetText();
};

// Class UMG.EditableTextBox
// Size: 0xa28 (Inherited: 0x108)
struct UEditableTextBox : UWidget {
	FText Text; // 0x108(0x18)
	FDelegate TextDelegate; // 0x120(0x10)
	FEditableTextBoxStyle WidgetStyle; // 0x130(0x7f0)
	USlateWidgetStyleAsset* Style; // 0x920(0x08)
	FText HintText; // 0x928(0x18)
	FDelegate HintTextDelegate; // 0x940(0x10)
	FSlateFontInfo Font; // 0x950(0x50)
	FLinearColor ForegroundColor; // 0x9a0(0x10)
	FLinearColor BackgroundColor; // 0x9b0(0x10)
	FLinearColor ReadOnlyForegroundColor; // 0x9c0(0x10)
	bool IsReadOnly; // 0x9d0(0x01)
	bool IsPassword; // 0x9d1(0x01)
	float MinimumDesiredWidth; // 0x9d4(0x04)
	FMargin Padding; // 0x9d8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0x9e8(0x01)
	bool SelectAllTextWhenFocused; // 0x9e9(0x01)
	bool RevertTextOnEscape; // 0x9ea(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x9eb(0x01)
	bool SelectAllTextOnCommit; // 0x9ec(0x01)
	bool AllowContextMenu; // 0x9ed(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x9ee(0x01)
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9ef(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x9f0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x9f1(0x01)
	enum class ETextJustify Justification; // 0x9f2(0x01)
	FShapedTextOptions ShapedTextOptions; // 0x9f3(0x03)
	FMulticastInlineDelegate OnTextChanged; // 0x9f8(0x10)
	FMulticastInlineDelegate OnTextCommitted; // 0xa08(0x10)

	void SetText(FText InText);
	void SetJustification(enum class ETextJustify InJustification);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(FText InText);
	void SetError(FText InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	bool HasError();
	FText GetText();
	void ClearError();
};

// Class UMG.ExpandableArea
// Size: 0x338 (Inherited: 0x108)
struct UExpandableArea : UWidget {
	FExpandableAreaStyle Style; // 0x110(0x120)
	FSlateBrush BorderBrush; // 0x230(0x88)
	FSlateColor BorderColor; // 0x2b8(0x28)
	bool bIsExpanded; // 0x2e0(0x01)
	float MaxHeight; // 0x2e4(0x04)
	FMargin HeaderPadding; // 0x2e8(0x10)
	FMargin AreaPadding; // 0x2f8(0x10)
	FMulticastInlineDelegate OnExpansionChanged; // 0x308(0x10)
	UWidget* HeaderContent; // 0x318(0x08)
	UWidget* BodyContent; // 0x320(0x08)

	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};

// Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding {

	float GetValue();
};

// Class UMG.GridPanel
// Size: 0x150 (Inherited: 0x120)
struct UGridPanel : UPanelWidget {
	TArray<float> ColumnFill; // 0x120(0x10)
	TArray<float> RowFill; // 0x130(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient);
	void SetColumnFill(int32_t ColumnIndex, float Coefficient);
	UGridSlot* AddChildToGrid(UWidget* Content, int32_t InRow, int32_t InColumn);
};

// Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	int32_t Row; // 0x4c(0x04)
	int32_t RowSpan; // 0x50(0x04)
	int32_t Column; // 0x54(0x04)
	int32_t ColumnSpan; // 0x58(0x04)
	int32_t Layer; // 0x5c(0x04)
	FVector2D Nudge; // 0x60(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetRowSpan(int32_t InRowSpan);
	void SetRow(int32_t InRow);
	void SetPadding(FMargin InPadding);
	void SetNudge(FVector2D InNudge);
	void SetLayer(int32_t InLayer);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetColumnSpan(int32_t InColumnSpan);
	void SetColumn(int32_t InColumn);
};

// Class UMG.HorizontalBox
// Size: 0x130 (Inherited: 0x120)
struct UHorizontalBox : UPanelWidget {

	UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);
};

// Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x40(0x10)
	FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(FSlateChildSize InSize);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.Image
// Size: 0x210 (Inherited: 0x108)
struct UImage : UWidget {
	FSlateBrush Brush; // 0x108(0x88)
	FDelegate BrushDelegate; // 0x190(0x10)
	FLinearColor ColorAndOpacity; // 0x1a0(0x10)
	FDelegate ColorAndOpacityDelegate; // 0x1b0(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x1c0(0x01)
	FDelegate OnMouseButtonDownEvent; // 0x1c4(0x10)

	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);
	void SetBrushTintColor(FSlateColor TintColor);
	void SetBrushSize(FVector2D DesiredSize);
	void SetBrushResourceObject(UObject* ResourceObject);
	void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize);
	void SetBrushFromSoftMaterial(TSoftObjectPtr<UMaterialInterface> SoftMaterial);
	void SetBrushFromMaterial(UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(USlateBrushAsset* Asset);
	void SetBrush(FSlateBrush InBrush);
	UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.InputKeySelector
// Size: 0x6f0 (Inherited: 0x108)
struct UInputKeySelector : UWidget {
	FButtonStyle WidgetStyle; // 0x108(0x278)
	FTextBlockStyle TextStyle; // 0x380(0x268)
	FInputChord SelectedKey; // 0x5e8(0x20)
	FSlateFontInfo Font; // 0x608(0x50)
	FMargin Margin; // 0x658(0x10)
	FLinearColor ColorAndOpacity; // 0x668(0x10)
	FText KeySelectionText; // 0x678(0x18)
	FText NoKeySpecifiedText; // 0x690(0x18)
	bool bAllowModifierKeys; // 0x6a8(0x01)
	bool bAllowGamepadKeys; // 0x6a9(0x01)
	TArray<FKey> EscapeKeys; // 0x6b0(0x10)
	FMulticastInlineDelegate OnKeySelected; // 0x6c0(0x10)
	FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6d0(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility);
	void SetSelectedKey(FInputChord InSelectedKey);
	void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);
	void SetKeySelectionText(FText InKeySelectionText);
	void SetEscapeKeys(TArray<FKey> InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(FInputChord SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue();
};

// Class UMG.InvalidationBox
// Size: 0x138 (Inherited: 0x120)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120(0x01)
	bool CacheRelativeTransforms; // 0x121(0x01)

	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};

// Class UMG.UserListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(TScriptInterface<IUserListEntry> UserListEntry);
	bool IsListItemExpanded(TScriptInterface<IUserListEntry> UserListEntry);
	UListViewBase* GetOwningListView(TScriptInterface<IUserListEntry> UserListEntry);
};

// Class UMG.UserObjectListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(UObject* ListItemObject);
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	UObject* GetListItemObject(TScriptInterface<IUserObjectListEntry> UserObjectListEntry);
};

// Class UMG.ListViewBase
// Size: 0x218 (Inherited: 0x108)
struct UListViewBase : UWidget {
	UUserWidget* EntryWidgetClass; // 0x108(0x08)
	float WheelScrollMultiplier; // 0x110(0x04)
	bool bEnableScrollAnimation; // 0x114(0x01)
	bool bEnableFixedLineOffset; // 0x115(0x01)
	float FixedLineScrollOffset; // 0x118(0x04)
	FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120(0x10)
	FMulticastInlineDelegate BP_OnEntryReleased; // 0x130(0x10)
	FUserWidgetPool EntryWidgetPool; // 0x140(0x80)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	TArray<UUserWidget*> GetDisplayedEntryWidgets();
};

// Class UMG.ListView
// Size: 0x368 (Inherited: 0x218)
struct UListView : UListViewBase {
	enum class EOrientation Orientation; // 0x2d8(0x01)
	enum class ESelectionMode SelectionMode; // 0x2d9(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x2da(0x01)
	bool bClearSelectionOnClick; // 0x2db(0x01)
	bool bIsFocusable; // 0x2dc(0x01)
	float EntrySpacing; // 0x2e0(0x04)
	bool bReturnFocusToSelection; // 0x2e4(0x01)
	TArray<UObject*> ListItems; // 0x2e8(0x10)
	FMulticastInlineDelegate BP_OnEntryInitialized; // 0x308(0x10)
	FMulticastInlineDelegate BP_OnItemClicked; // 0x318(0x10)
	FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x328(0x10)
	FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x338(0x10)
	FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x348(0x10)
	FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x358(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode);
	void SetSelectedIndex(int32_t Index);
	void ScrollIndexIntoView(int32_t Index);
	void RemoveItem(UObject* Item);
	void NavigateToIndex(int32_t Index);
	bool IsRefreshPending();
	int32_t GetNumItems();
	TArray<UObject*> GetListItems();
	UObject* GetItemAt(int32_t Index);
	int32_t GetIndexForItem(UObject* Item);
	void ClearListItems();
	void BP_SetSelectedItem(UObject* Item);
	void BP_SetListItems(TArray<UObject*> InListItems);
	void BP_SetItemSelection(UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(UObject* Item);
	void BP_NavigateToItem(UObject* Item);
	bool BP_IsItemVisible(UObject* Item);
	bool BP_GetSelectedItems(TArray<UObject*> Items);
	UObject* BP_GetSelectedItem();
	int32_t BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(UObject* Item);
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
// Size: 0x160 (Inherited: 0x120)
struct UMenuAnchor : UContentWidget {
	UUserWidget* MenuClass; // 0x120(0x08)
	FDelegate OnGetMenuContentEvent; // 0x128(0x10)
	enum class EMenuPlacement Placement; // 0x138(0x01)
	bool bFitInWindow; // 0x139(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x13a(0x01)
	bool UseApplicationMenuStack; // 0x13b(0x01)
	FMulticastInlineDelegate OnMenuOpenChanged; // 0x140(0x10)

	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void SetPlacement(enum class EMenuPlacement InPlacement);
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	FVector2D GetMenuPosition();
	void FitInWindow(bool bFit);
	void Close();
};

// Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue();
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x550 (Inherited: 0xe0)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	FMovieScene2DTransformMask TransformMask; // 0xe0(0x04)
	FMovieSceneFloatChannel Translation[0x2]; // 0xe8(0x140)
	FMovieSceneFloatChannel Rotation; // 0x228(0xa0)
	FMovieSceneFloatChannel Scale[0x2]; // 0x2c8(0x140)
	FMovieSceneFloatChannel Shear[0x2]; // 0x408(0x140)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x360 (Inherited: 0xe0)
struct UMovieSceneMarginSection : UMovieSceneSection {
	FMovieSceneFloatChannel TopCurve; // 0xe0(0xa0)
	FMovieSceneFloatChannel LeftCurve; // 0x180(0xa0)
	FMovieSceneFloatChannel RightCurve; // 0x220(0xa0)
	FMovieSceneFloatChannel BottomCurve; // 0x2c0(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x80 (Inherited: 0x68)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x68(0x10)
	FName TrackName; // 0x78(0x08)
};

// Class UMG.MultiLineEditableText
// Size: 0x460 (Inherited: 0x128)
struct UMultiLineEditableText : UTextLayoutWidget {
	FText Text; // 0x128(0x18)
	FText HintText; // 0x140(0x18)
	FDelegate HintTextDelegate; // 0x158(0x10)
	FTextBlockStyle WidgetStyle; // 0x168(0x268)
	bool bIsReadOnly; // 0x3d0(0x01)
	FSlateFontInfo Font; // 0x3d8(0x50)
	bool SelectAllTextWhenFocused; // 0x428(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x429(0x01)
	bool RevertTextOnEscape; // 0x42a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x42b(0x01)
	bool AllowContextMenu; // 0x42c(0x01)
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x42d(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x42e(0x01)
	FMulticastInlineDelegate OnTextChanged; // 0x430(0x10)
	FMulticastInlineDelegate OnTextCommitted; // 0x440(0x10)

	void SetWidgetStyle(FTextBlockStyle InWidgetStyle);
	void SetText(FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(FText InHintText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText Text);
	FText GetText();
	FText GetHintText();
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xc80 (Inherited: 0x128)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	FText Text; // 0x128(0x18)
	FText HintText; // 0x140(0x18)
	FDelegate HintTextDelegate; // 0x158(0x10)
	FEditableTextBoxStyle WidgetStyle; // 0x168(0x7f0)
	FTextBlockStyle TextStyle; // 0x958(0x268)
	bool bIsReadOnly; // 0xbc0(0x01)
	bool AllowContextMenu; // 0xbc1(0x01)
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xbc2(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbc3(0x01)
	USlateWidgetStyleAsset* Style; // 0xbc8(0x08)
	FSlateFontInfo Font; // 0xbd0(0x50)
	FLinearColor ForegroundColor; // 0xc20(0x10)
	FLinearColor BackgroundColor; // 0xc30(0x10)
	FLinearColor ReadOnlyForegroundColor; // 0xc40(0x10)
	FMulticastInlineDelegate OnTextChanged; // 0xc50(0x10)
	FMulticastInlineDelegate OnTextCommitted; // 0xc60(0x10)

	void SetTextStyle(FTextBlockStyle InTextStyle);
	void SetText(FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(FText InHintText);
	void SetError(FText InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	FText GetText();
	FText GetHintText();
};

// Class UMG.NamedSlot
// Size: 0x130 (Inherited: 0x120)
struct UNamedSlot : UContentWidget {
};

// Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x118 (Inherited: 0x108)
struct UNativeWidgetHost : UWidget {
};

// Class UMG.Overlay
// Size: 0x130 (Inherited: 0x120)
struct UOverlay : UPanelWidget {

	UOverlaySlot* AddChildToOverlay(UWidget* Content);
};

// Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot {
	FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.ProgressBar
// Size: 0x318 (Inherited: 0x108)
struct UProgressBar : UWidget {
	FProgressBarStyle WidgetStyle; // 0x108(0x1a0)
	USlateWidgetStyleAsset* Style; // 0x2a8(0x08)
	USlateBrushAsset* BackgroundImage; // 0x2b0(0x08)
	USlateBrushAsset* FillImage; // 0x2b8(0x08)
	USlateBrushAsset* MarqueeImage; // 0x2c0(0x08)
	float Percent; // 0x2c8(0x04)
	enum class EProgressBarFillType BarFillType; // 0x2cc(0x01)
	bool bIsMarquee; // 0x2cd(0x01)
	FVector2D BorderPadding; // 0x2d0(0x08)
	FDelegate PercentDelegate; // 0x2d8(0x10)
	FLinearColor FillColorAndOpacity; // 0x2e8(0x10)
	FDelegate FillColorAndOpacityDelegate; // 0x2f8(0x10)

	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(FLinearColor InColor);
};

// Class UMG.RetainerBox
// Size: 0x150 (Inherited: 0x120)
struct URetainerBox : UContentWidget {
	bool RenderOnInvalidation; // 0x120(0x01)
	bool RenderOnPhase; // 0x121(0x01)
	int32_t Phase; // 0x124(0x04)
	int32_t PhaseCount; // 0x128(0x04)
	UMaterialInterface* EffectMaterial; // 0x130(0x08)
	FName TextureParameter; // 0x138(0x08)

	void SetTextureParameter(FName TextureParameter);
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);
	void SetEffectMaterial(UMaterialInterface* EffectMaterial);
	void RequestRender();
	UMaterialInstanceDynamic* GetEffectMaterial();
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	UDataTable* ImageSet; // 0x28(0x08)
};

// Class UMG.SafeZone
// Size: 0x138 (Inherited: 0x120)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120(0x01)
	bool PadRight; // 0x121(0x01)
	bool PadTop; // 0x122(0x01)
	bool PadBottom; // 0x123(0x01)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	FMargin SafeAreaScale; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	FMargin Padding; // 0x50(0x10)
};

// Class UMG.ScaleBox
// Size: 0x140 (Inherited: 0x120)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x120(0x01)
	enum class EStretchDirection StretchDirection; // 0x121(0x01)
	float UserSpecifiedScale; // 0x124(0x04)
	bool IgnoreInheritedScale; // 0x128(0x01)

	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(enum class EStretchDirection InStretchDirection);
	void SetStretch(enum class EStretch InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// Class UMG.ScaleBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.ScrollBar
// Size: 0x610 (Inherited: 0x108)
struct UScrollBar : UWidget {
	FScrollBarStyle WidgetStyle; // 0x108(0x4d0)
	USlateWidgetStyleAsset* Style; // 0x5d8(0x08)
	bool bAlwaysShowScrollbar; // 0x5e0(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x5e1(0x01)
	enum class EOrientation Orientation; // 0x5e2(0x01)
	FVector2D Thickness; // 0x5e4(0x08)
	FMargin Padding; // 0x5ec(0x10)

	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Class UMG.ScrollBox
// Size: 0x880 (Inherited: 0x120)
struct UScrollBox : UPanelWidget {
	FScrollBoxStyle WidgetStyle; // 0x120(0x228)
	FScrollBarStyle WidgetBarStyle; // 0x348(0x4d0)
	USlateWidgetStyleAsset* Style; // 0x818(0x08)
	USlateWidgetStyleAsset* BarStyle; // 0x820(0x08)
	enum class EOrientation Orientation; // 0x828(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x829(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x82a(0x01)
	FVector2D ScrollbarThickness; // 0x82c(0x08)
	FMargin ScrollbarPadding; // 0x834(0x10)
	bool AlwaysShowScrollbar; // 0x844(0x01)
	bool AlwaysShowScrollbarTrack; // 0x845(0x01)
	bool AllowOverscroll; // 0x846(0x01)
	bool bAnimateWheelScrolling; // 0x847(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x848(0x01)
	float NavigationScrollPadding; // 0x84c(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x850(0x01)
	bool bAllowRightClickDragScrolling; // 0x851(0x01)
	float WheelScrollMultiplier; // 0x854(0x04)
	FMulticastInlineDelegate OnUserScrolled; // 0x858(0x10)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(FVector2D NewScrollbarThickness);
	void SetScrollbarPadding(FMargin NewScrollbarPadding);
	void SetOrientation(enum class EOrientation NewOrientation);
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	void EndInertialScrolling();
};

// Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.SizeBox
// Size: 0x158 (Inherited: 0x120)
struct USizeBox : UContentWidget {
	float WidthOverride; // 0x130(0x04)
	float HeightOverride; // 0x134(0x04)
	float MinDesiredWidth; // 0x138(0x04)
	float MinDesiredHeight; // 0x13c(0x04)
	float MaxDesiredWidth; // 0x140(0x04)
	float MaxDesiredHeight; // 0x144(0x04)
	float MinAspectRatio; // 0x148(0x04)
	float MaxAspectRatio; // 0x14c(0x04)
	char bOverride_WidthOverride : 1; // 0x150(0x01)
	char bOverride_HeightOverride : 1; // 0x150(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x150(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x150(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x150(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x150(0x01)
	char bOverride_MinAspectRatio : 1; // 0x150(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x150(0x01)

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

// Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	FVector2D TransformVectorLocalToAbsolute(FGeometry Geometry, FVector2D LocalVector);
	FVector2D TransformVectorAbsoluteToLocal(FGeometry Geometry, FVector2D AbsoluteVector);
	float TransformScalarLocalToAbsolute(FGeometry Geometry, float LocalScalar);
	float TransformScalarAbsoluteToLocal(FGeometry Geometry, float AbsoluteScalar);
	void ScreenToWidgetLocal(UObject* WorldContextObject, FGeometry Geometry, FVector2D ScreenPosition, FVector2D LocalCoordinate, bool bIncludeWindowPosition);
	void ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D AbsoluteCoordinate, bool bIncludeWindowPosition);
	void ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D ViewportPosition);
	void LocalToViewport(UObject* WorldContextObject, FGeometry Geometry, FVector2D LocalCoordinate, FVector2D PixelPosition, FVector2D ViewportPosition);
	FVector2D LocalToAbsolute(FGeometry Geometry, FVector2D LocalCoordinate);
	bool IsUnderLocation(FGeometry Geometry, FVector2D AbsoluteCoordinate);
	FVector2D GetLocalTopLeft(FGeometry Geometry);
	FVector2D GetLocalSize(FGeometry Geometry);
	FVector2D GetAbsoluteSize(FGeometry Geometry);
	bool EqualEqual_SlateBrush(FSlateBrush A, FSlateBrush B);
	void AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D PixelPosition, FVector2D ViewportPosition);
	FVector2D AbsoluteToLocal(FGeometry Geometry, FVector2D AbsoluteCoordinate);
};

// Class UMG.SlateVectorArtData
// Size: 0x60 (Inherited: 0x28)
struct USlateVectorArtData : UObject {
	TArray<FSlateMeshVertex> VertexData; // 0x28(0x10)
	TArray<uint32_t> IndexData; // 0x38(0x10)
	UMaterialInterface* Material; // 0x48(0x08)
	FVector2D ExtentMin; // 0x50(0x08)
	FVector2D ExtentMax; // 0x58(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a(0x01)
	FText AccessibleText; // 0x30(0x18)
	FDelegate AccessibleTextDelegate; // 0x48(0x10)
	FText AccessibleSummaryText; // 0x58(0x18)
	FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Class UMG.Slider
// Size: 0x4f8 (Inherited: 0x108)
struct USlider : UWidget {
	float Value; // 0x108(0x04)
	FDelegate ValueDelegate; // 0x10c(0x10)
	float MinValue; // 0x11c(0x04)
	float MaxValue; // 0x120(0x04)
	FSliderStyle WidgetStyle; // 0x128(0x340)
	enum class EOrientation Orientation; // 0x468(0x01)
	FLinearColor SliderBarColor; // 0x46c(0x10)
	FLinearColor SliderHandleColor; // 0x47c(0x10)
	bool IndentHandle; // 0x48c(0x01)
	bool Locked; // 0x48d(0x01)
	bool MouseUsesStep; // 0x48e(0x01)
	bool RequiresControllerLock; // 0x48f(0x01)
	float StepSize; // 0x490(0x04)
	bool IsFocusable; // 0x494(0x01)
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x498(0x10)
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4a8(0x10)
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4b8(0x10)
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4c8(0x10)
	FMulticastInlineDelegate OnValueChanged; // 0x4d8(0x10)

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

// Class UMG.Spacer
// Size: 0x120 (Inherited: 0x108)
struct USpacer : UWidget {
	FVector2D Size; // 0x108(0x08)

	void SetSize(FVector2D InSize);
};

// Class UMG.SpinBox
// Size: 0x518 (Inherited: 0x108)
struct USpinBox : UWidget {
	float Value; // 0x108(0x04)
	FDelegate ValueDelegate; // 0x10c(0x10)
	FSpinBoxStyle WidgetStyle; // 0x120(0x2e8)
	USlateWidgetStyleAsset* Style; // 0x408(0x08)
	int32_t MinFractionalDigits; // 0x410(0x04)
	int32_t MaxFractionalDigits; // 0x414(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x418(0x01)
	float Delta; // 0x41c(0x04)
	float SliderExponent; // 0x420(0x04)
	FSlateFontInfo Font; // 0x428(0x50)
	enum class ETextJustify Justification; // 0x478(0x01)
	float MinDesiredWidth; // 0x47c(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x480(0x01)
	bool SelectAllTextOnCommit; // 0x481(0x01)
	FSlateColor ForegroundColor; // 0x488(0x28)
	FMulticastInlineDelegate OnValueChanged; // 0x4b0(0x10)
	FMulticastInlineDelegate OnValueCommitted; // 0x4c0(0x10)
	FMulticastInlineDelegate OnBeginSliderMovement; // 0x4d0(0x10)
	FMulticastInlineDelegate OnEndSliderMovement; // 0x4e0(0x10)
	char bOverride_MinValue : 1; // 0x4f0(0x01)
	char bOverride_MaxValue : 1; // 0x4f0(0x01)
	char bOverride_MinSliderValue : 1; // 0x4f0(0x01)
	char bOverride_MaxSliderValue : 1; // 0x4f0(0x01)
	float MinValue; // 0x4f4(0x04)
	float MaxValue; // 0x4f8(0x04)
	float MinSliderValue; // 0x4fc(0x04)
	float MaxSliderValue; // 0x500(0x04)

	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMinFractionalDigits(int32_t NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetMaxFractionalDigits(int32_t NewValue);
	void SetForegroundColor(FSlateColor InForegroundColor);
	void SetDelta(float NewValue);
	void SetAlwaysUsesDeltaSnap(bool bNewValue);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	int32_t GetMinFractionalDigits();
	float GetMaxValue();
	float GetMaxSliderValue();
	int32_t GetMaxFractionalDigits();
	float GetDelta();
	bool GetAlwaysUsesDeltaSnap();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding {

	FText GetTextValue();
	FString GetStringValue();
};

// Class UMG.Throbber
// Size: 0x1b0 (Inherited: 0x108)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108(0x04)
	bool bAnimateHorizontally; // 0x10c(0x01)
	bool bAnimateVertically; // 0x10d(0x01)
	bool bAnimateOpacity; // 0x10e(0x01)
	USlateBrushAsset* PieceImage; // 0x110(0x08)
	FSlateBrush Image; // 0x118(0x88)

	void SetNumberOfPieces(int32_t InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Class UMG.TileView
// Size: 0x388 (Inherited: 0x368)
struct UTileView : UListView {
	float EntryHeight; // 0x368(0x04)
	float EntryWidth; // 0x36c(0x04)
	enum class EListItemAlignment TileAlignment; // 0x370(0x01)
	bool bWrapHorizontalNavigation; // 0x371(0x01)

	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
};

// Class UMG.TreeView
// Size: 0x3c0 (Inherited: 0x368)
struct UTreeView : UListView {
	FDelegate BP_OnGetItemChildren; // 0x378(0x10)
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388(0x10)

	void SetItemExpansion(UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// Class UMG.UMGSequencePlayer
// Size: 0x7a8 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject {
	UWidgetAnimation* Animation; // 0x408(0x08)

	void SetUserTag(FName InUserTag);
	FName GetUserTag();
};

// Class UMG.UniformGridPanel
// Size: 0x148 (Inherited: 0x120)
struct UUniformGridPanel : UPanelWidget {
	FMargin SlotPadding; // 0x120(0x10)
	float MinDesiredSlotWidth; // 0x130(0x04)
	float MinDesiredSlotHeight; // 0x134(0x04)

	void SetSlotPadding(FMargin InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32_t InRow, int32_t InColumn);
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	int32_t Row; // 0x3c(0x04)
	int32_t Column; // 0x40(0x04)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetRow(int32_t InRow);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetColumn(int32_t InColumn);
};

// Class UMG.VerticalBox
// Size: 0x130 (Inherited: 0x120)
struct UVerticalBox : UPanelWidget {

	UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);
};

// Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot {
	FSlateChildSize Size; // 0x38(0x08)
	FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(FSlateChildSize InSize);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.Viewport
// Size: 0x148 (Inherited: 0x120)
struct UViewport : UContentWidget {
	FLinearColor BackgroundColor; // 0x120(0x10)

	AActor* Spawn(AActor* ActorClass);
	void SetViewRotation(FRotator Rotation);
	void SetViewLocation(FVector Location);
	FRotator GetViewRotation();
	UWorld* GetViewportWorld();
	FVector GetViewLocation();
};

// Class UMG.VisibilityBinding
// Size: 0x60 (Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue();
};

// Class UMG.WidgetAnimation
// Size: 0x378 (Inherited: 0x348)
struct UWidgetAnimation : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x348(0x08)
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x350(0x10)
	bool bLegacyFinishOnStop; // 0x360(0x01)
	FString DisplayLabel; // 0x368(0x10)

	void UnbindFromAnimationStarted(UUserWidget* Widget, FDelegate Delegate);
	void UnbindFromAnimationFinished(UUserWidget* Widget, FDelegate Delegate);
	void UnbindAllFromAnimationStarted(UUserWidget* Widget);
	void UnbindAllFromAnimationFinished(UUserWidget* Widget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(UUserWidget* Widget, FDelegate Delegate);
	void BindToAnimationFinished(UUserWidget* Widget, FDelegate Delegate);
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	FMulticastInlineDelegate Finished; // 0x28(0x10)

	UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer* Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
	UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer* Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
};

// Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding {

	UWidget* GetValue();
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x398 (Inherited: 0x328)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328(0x08)
	char bAllowTemplate : 1; // 0x330(0x01)
	char bAllowDynamicCreation : 1; // 0x330(0x01)
	char bValidTemplate : 1; // 0x330(0x01)
	char bTemplateInitialized : 1; // 0x330(0x01)
	char bCookedTemplate : 1; // 0x330(0x01)
	char bClassRequiresNativeTick : 1; // 0x330(0x01)
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338(0x10)
	TArray<UWidgetAnimation*> Animations; // 0x348(0x10)
	TArray<FName> NamedSlots; // 0x358(0x10)
	TSoftObjectPtr<UUserWidget> TemplateAsset; // 0x368(0x28)
	UUserWidget* Template; // 0x390(0x08)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	FEventReply UnlockMouse(FEventReply Reply);
	FEventReply Unhandled();
	void SetWindowTitleBarState(UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void SetWindowTitleBarOnCloseClickedDelegate(FDelegate Delegate);
	void SetWindowTitleBarCloseButtonActive(bool bActive);
	FEventReply SetUserFocus(FEventReply Reply, UWidget* FocusWidget, bool bInAllUsers);
	FEventReply SetMousePosition(FEventReply Reply, FVector2D NewMousePosition);
	void SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode);
	void SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void SetInputMode_GameOnly(APlayerController* PlayerController);
	void SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool SetHardwareCursor(UObject* WorldContextObject, enum class EMouseCursor CursorShape, FName CursorName, FVector2D HotSpot);
	void SetFocusToGameViewport();
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
	void SetBrushResourceToTexture(FSlateBrush Brush, UTexture2D* Texture);
	void SetBrushResourceToMaterial(FSlateBrush Brush, UMaterialInterface* Material);
	void RestorePreviousWindowTitleBarState();
	FEventReply ReleaseMouseCapture(FEventReply Reply);
	FEventReply ReleaseJoystickCapture(FEventReply Reply, bool bInAllJoysticks);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	FSlateBrush NoResourceBrush();
	FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int32_t Width, int32_t Height);
	FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int32_t Width, int32_t Height);
	FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset);
	FEventReply LockMouse(FEventReply Reply, UWidget* CapturingWidget);
	bool IsDragDropping();
	FEventReply Handled();
	void GetSafeZonePadding(UObject* WorldContextObject, FVector4 SafePadding, FVector2D SafePaddingScale, FVector4 SpillOverPadding);
	FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent Event);
	FInputEvent GetInputEventFromPointerEvent(FPointerEvent Event);
	FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent Event);
	FInputEvent GetInputEventFromKeyEvent(FKeyEvent Event);
	FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent Event);
	UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush Brush);
	UDragDropOperation* GetDragDroppingContent();
	UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush Brush);
	UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush Brush);
	UObject* GetBrushResource(FSlateBrush Brush);
	void GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*> FoundWidgets, UInterface* Interface, bool TopLevelOnly);
	void GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*> FoundWidgets, UUserWidget* WidgetClass, bool TopLevelOnly);
	FEventReply EndDragDrop(FEventReply Reply);
	void DrawTextFormatted(FPaintContext Context, FText Text, FVector2D Position, UFont* Font, int32_t FontSize, FName FontTypeFace, FLinearColor Tint);
	void DrawText(FPaintContext Context, FString inString, FVector2D Position, FLinearColor Tint);
	void DrawLines(FPaintContext Context, TArray<FVector2D> Points, FLinearColor Tint, bool bAntiAlias, float Thickness);
	void DrawLine(FPaintContext Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness);
	void DrawBox(FPaintContext Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint);
	void DismissAllMenus();
	FEventReply DetectDragIfPressed(FPointerEvent PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey);
	FEventReply DetectDrag(FEventReply Reply, UWidget* WidgetDetectingDrag, FKey DragKey);
	UDragDropOperation* CreateDragDropOperation(UDragDropOperation* OperationClass);
	UUserWidget* Create(UObject* WorldContextObject, UUserWidget* WidgetType, APlayerController* OwningPlayer);
	FEventReply ClearUserFocus(FEventReply Reply, bool bInAllUsers);
	FEventReply CaptureMouse(FEventReply Reply, UWidget* CapturingWidget);
	FEventReply CaptureJoystick(FEventReply Reply, UWidget* CapturingWidget, bool bInAllJoysticks);
	void CancelDragDrop();
};

// Class UMG.WidgetInteractionComponent
// Size: 0x3e0 (Inherited: 0x1f0)
struct UWidgetInteractionComponent : USceneComponent {
	FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x1f0(0x10)
	int32_t VirtualUserIndex; // 0x210(0x04)
	float PointerIndex; // 0x214(0x04)
	enum class ECollisionChannel TraceChannel; // 0x218(0x01)
	float InteractionDistance; // 0x21c(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x220(0x01)
	bool bEnableHitTesting; // 0x221(0x01)
	bool bShowDebug; // 0x222(0x01)
	FLinearColor DebugColor; // 0x224(0x10)
	FHitResult CustomHitResult; // 0x2b0(0x88)
	FVector2D LocalHitLocation; // 0x338(0x08)
	FVector2D LastLocalHitLocation; // 0x340(0x08)
	UWidgetComponent* HoveredWidgetComponent; // 0x348(0x08)
	FHitResult LastHitResult; // 0x350(0x88)
	bool bIsHoveredWidgetInteractable; // 0x3d8(0x01)
	bool bIsHoveredWidgetFocusable; // 0x3d9(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x3da(0x01)

	void SetFocus(UWidget* FocusWidget);
	void SetCustomHitResult(FHitResult HitResult);
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
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

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
	bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D ScreenPosition, bool bPlayerViewportRelative);
	FGeometry GetViewportWidgetGeometry(UObject* WorldContextObject);
	FVector2D GetViewportSize(UObject* WorldContextObject);
	float GetViewportScale(UObject* WorldContextObject);
	FGeometry GetPlayerScreenWidgetGeometry(APlayerController* PlayerController);
	bool GetMousePositionScaledByDPI(APlayerController* Player, float LocationX, float LocationY);
	FVector2D GetMousePositionOnViewport(UObject* WorldContextObject);
	FVector2D GetMousePositionOnPlatform();
};

// Class UMG.WidgetNavigation
// Size: 0x100 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	FWidgetNavigationData Up; // 0x28(0x24)
	FWidgetNavigationData Down; // 0x4c(0x24)
	FWidgetNavigationData Left; // 0x70(0x24)
	FWidgetNavigationData Right; // 0x94(0x24)
	FWidgetNavigationData Next; // 0xb8(0x24)
	FWidgetNavigationData Previous; // 0xdc(0x24)
};

// Class UMG.WidgetSwitcher
// Size: 0x138 (Inherited: 0x120)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120(0x04)

	void SetActiveWidgetIndex(int32_t Index);
	void SetActiveWidget(UWidget* Widget);
	UWidget* GetWidgetAtIndex(int32_t Index);
	int32_t GetNumWidgets();
	int32_t GetActiveWidgetIndex();
	UWidget* GetActiveWidget();
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot {
	FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject {
	UWidget* RootWidget; // 0x28(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x140 (Inherited: 0x120)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x121(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// Class UMG.WrapBox
// Size: 0x140 (Inherited: 0x120)
struct UWrapBox : UPanelWidget {
	FVector2D InnerSlotPadding; // 0x120(0x08)
	float WrapWidth; // 0x128(0x04)
	bool bExplicitWrapWidth; // 0x12c(0x01)

	void SetInnerSlotPadding(FVector2D InPadding);
	UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);
};

// Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(FMargin InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

