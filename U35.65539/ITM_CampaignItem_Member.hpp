#ifndef UE4SS_SDK_ITM_CampaignItem_Member_HPP
#define UE4SS_SDK_ITM_CampaignItem_Member_HPP

class UITM_CampaignItem_Member_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFSDLabelWidget* FSDLabelWidget_0;
    FString MemberName;

    void Construct();
    void ExecuteUbergraph_ITM_CampaignItem_Member(int32 EntryPoint, FText CallFunc_Conv_StringToText_ReturnValue);
}

#endif
