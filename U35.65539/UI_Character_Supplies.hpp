#ifndef UE4SS_SDK_UI_Character_Supplies_HPP
#define UE4SS_SDK_UI_Character_Supplies_HPP

class UUI_Character_Supplies_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_SupplyBar_C* ITM_SupplyBar_Ammo;
    UITM_SupplyBar_C* ITM_SupplyBar_Health;
    bool SuppliesVisible;
    bool HealthVisible;

    void HandleVisiblity(bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void SetData(UFSDPlayerState* Player);
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Character_Supplies(int32 EntryPoint, UFSDPlayerState* K2Node_CustomEvent_player, SupplyStatusChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetSupplyHealthStatus_ReturnValue, float CallFunc_GetSupplyAmmoStatus_ReturnValue, float K2Node_CustomEvent_ammoStatus01, float K2Node_CustomEvent_healthStatus01, bool K2Node_Event_IsDesignTime);
}

#endif
