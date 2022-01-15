#ifndef UE4SS_SDK_UI_CommunityRewardResource_HPP
#define UE4SS_SDK_UI_CommunityRewardResource_HPP

class UUI_CommunityRewardResource_C : URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* ResourceAmount;
    UImage* ResourceIcon;
    UResourceData* Resource;
    int32 Amount;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_CommunityRewardResource(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_IntToText_ReturnValue);
}

#endif
