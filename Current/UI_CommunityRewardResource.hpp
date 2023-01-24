#ifndef UE4SS_SDK_UI_CommunityRewardResource_HPP
#define UE4SS_SDK_UI_CommunityRewardResource_HPP

class UUI_CommunityRewardResource_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ResourceAmount;
    class UImage* ResourceIcon;
    class UResourceData* Resource;
    int32 Amount;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_CommunityRewardResource(int32 EntryPoint);
};

#endif
