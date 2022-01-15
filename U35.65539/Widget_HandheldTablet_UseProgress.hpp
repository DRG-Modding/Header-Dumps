#ifndef UE4SS_SDK_Widget_HandheldTablet_UseProgress_HPP
#define UE4SS_SDK_Widget_HandheldTablet_UseProgress_HPP

class UWidget_HandheldTablet_UseProgress_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    UImage* UseImage;
    UProgressBar* UseProgress;
    APlayerCharacter* Character;
    UUsableComponentBase* Usable;

    void UpdateIcon(UTexture2D* CallFunc_GetUsableIcon_OutTexture, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible);
    void GetUsableIcon(UTexture2D*& OutTexture, UObjectInfoComponent* ObjectInfo, UTexture2D* Icon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, AActor* CallFunc_GetOwner_ReturnValue, UObjectInfoComponent* CallFunc_GetComponentByClass_ReturnValue, UTexture2D* CallFunc_GetInGameIcon_ReturnValue, UTexture2D* CallFunc_GetUsableIcon_ReturnValue);
    void UpdateProgress(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetUseProgressInPercent_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Widget_HandheldTablet_UseProgress(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
