#ifndef UE4SS_SDK_LCD_CampaignProgress_HPP
#define UE4SS_SDK_LCD_CampaignProgress_HPP

class ULCD_CampaignProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_41;
    class UITM_CampaignProgress_Small_C* ITM_CampaignProgress_Small;

    void Construct();
    void OnCampaignChanged_Event_0();
    void ExecuteUbergraph_LCD_CampaignProgress(int32 EntryPoint, FExecuteUbergraph_LCD_CampaignProgressK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue);
};

#endif
