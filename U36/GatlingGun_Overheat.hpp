#ifndef UE4SS_SDK_GatlingGun_Overheat_HPP
#define UE4SS_SDK_GatlingGun_Overheat_HPP

class UGatlingGun_Overheat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG;
    class UImage* CircularProgressBar;
    class UTextBlock* TextBlock_HeatValue;
    class UTextBlock* TextBlock_Status;
    class UMaterialInstanceDynamic* DynamicMat;
    float HeatPercentage;
    bool Overheated;

    void SetHeatValue(float HeatPercentage, bool Overheated);
    void Construct();
    void SetProgress(float Percent);
    void ExecuteUbergraph_GatlingGun_Overheat(int32 EntryPoint);
};

#endif
