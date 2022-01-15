#ifndef UE4SS_SDK_HUD_Radar2_HPP
#define UE4SS_SDK_HUD_Radar2_HPP

class UHUD_Radar2_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* CompassImage;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_HUD_Radar2(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
