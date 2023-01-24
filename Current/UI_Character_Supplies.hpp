#ifndef UE4SS_SDK_UI_Character_Supplies_HPP
#define UE4SS_SDK_UI_Character_Supplies_HPP

class UUI_Character_Supplies_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_SupplyBar_C* ITM_SupplyBar_Ammo;
    class UITM_SupplyBar_C* ITM_SupplyBar_Health;
    bool SuppliesVisible;
    bool HealthVisible;

    void HandleVisiblity();
    void SetData(class AFSDPlayerState* Player);
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Character_Supplies(int32 EntryPoint);
};

#endif
