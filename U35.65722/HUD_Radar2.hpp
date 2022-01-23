#ifndef UE4SS_SDK_HUD_Radar2_HPP
#define UE4SS_SDK_HUD_Radar2_HPP

class UHUD_Radar2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CompassImage;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_HUD_Radar2(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
