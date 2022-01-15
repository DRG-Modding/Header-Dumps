#ifndef UE4SS_SDK_LCD_CampaignProgress_HPP
#define UE4SS_SDK_LCD_CampaignProgress_HPP

class ULCD_CampaignProgress_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_41;
    UITM_CampaignProgress_Small_C* ITM_CampaignProgress_Small;

    void Construct();
    void OnCampaignChanged_Event_0();
    void ExecuteUbergraph_LCD_CampaignProgress(int32 EntryPoint, Delegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue);
}

#endif
