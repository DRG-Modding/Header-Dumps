#ifndef UE4SS_SDK_GatlingGun_Overheat_HPP
#define UE4SS_SDK_GatlingGun_Overheat_HPP

class UGatlingGun_Overheat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CircularProgressBar;
    float Percent;
    class AItem* Item;

    void SetPercent(float InPercent);
    void SetHeatValue(float HeatPercentage, bool overHeated);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Init(class AItem* Item);
    void OnEquipped();
    void OnUnequipped();
    void ExecuteUbergraph_GatlingGun_Overheat(int32 EntryPoint);
};

#endif
