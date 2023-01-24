#ifndef UE4SS_SDK_GatlingGun_Overheat_HPP
#define UE4SS_SDK_GatlingGun_Overheat_HPP

class UGatlingGun_Overheat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CircularProgressBar;
    float Percent;

    void SetPercent(float InPercent);
    void SetHeatValue(float HeatPercentage, bool Overheated);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_GatlingGun_Overheat(int32 EntryPoint);
};

#endif
