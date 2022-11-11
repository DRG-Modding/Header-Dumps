#ifndef UE4SS_SDK_BP_Invitation_HPP
#define UE4SS_SDK_BP_Invitation_HPP

class UBP_Invitation_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hide;
    class UWidgetAnimation* Show;
    class UImage* AvatarImage;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBasic_ButtonScalable2_C* BTN_Ignore;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UHorizontalBox* buttons;
    class UHorizontalBox* buttons2;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    class UHorizontalBox* DataBox;
    FDiscordUserDataSDK UserData_New;
    bool Initialized;
    FDateTime TimeStarted;
    FBP_Invitation_CImageReady ImageReady;
    void ImageReady(FString URL);
    bool Initializing;
    float InviteTime;

    void ReplyInvite(int32 Reply);
    void Initialize(FDiscordUserDataSDK User Data, float TimeElapsed);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture);
    void OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnReadyImage(FString URL);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void HideUIDelayed();
    void ExecuteUbergraph_BP_Invitation(int32 EntryPoint);
    void ImageReady__DelegateSignature(FString URL);
};

#endif
