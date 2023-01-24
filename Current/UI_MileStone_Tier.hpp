#ifndef UE4SS_SDK_UI_MileStone_Tier_HPP
#define UE4SS_SDK_UI_MileStone_Tier_HPP

class UUI_Milestone_Tier_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Tier01;
    class UImage* Tier02;
    class UImage* Tier03;
    class UImage* Tier04;
    class UImage* Tier05;
    class UImage* Tier06;
    TArray<class UImage*> Tiers;
    int32 MilestoneTier;
    float ImageDimension;

    void InitTierImage(class UImage* Image);
    void Set Tier(int32 Tier);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Milestone_Tier(int32 EntryPoint);
};

#endif
