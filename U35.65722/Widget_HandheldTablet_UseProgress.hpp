#ifndef UE4SS_SDK_Widget_HandheldTablet_UseProgress_HPP
#define UE4SS_SDK_Widget_HandheldTablet_UseProgress_HPP

class UWidget_HandheldTablet_UseProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    class UImage* UseImage;
    class UProgressBar* UseProgress;
    class APlayerCharacter* Character;
    class UUsableComponentBase* Usable;

    void UpdateIcon(class UTexture2D* CallFunc_GetUsableIcon_OutTexture, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible);
    void GetUsableIcon(class UTexture2D*& OutTexture, class UObjectInfoComponent* ObjectInfo, class UTexture2D* Icon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class UObjectInfoComponent* CallFunc_GetComponentByClass_ReturnValue, class UTexture2D* CallFunc_GetInGameIcon_ReturnValue, class UTexture2D* CallFunc_GetUsableIcon_ReturnValue);
    void UpdateProgress(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetUseProgressInPercent_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Widget_HandheldTablet_UseProgress(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
