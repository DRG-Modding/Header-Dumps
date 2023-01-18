#ifndef UE4SS_SDK_UI_PlayerSpeaking_WithName_HPP
#define UE4SS_SDK_UI_PlayerSpeaking_WithName_HPP

class UUI_PlayerSpeaking_WithName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* LineBox;
    class UBasic_Label_C* NameLabel;
    class UBasic_Image_C* SpeakingIcon;
    class AFSDPlayerState* PlayerState;
    bool IsTalking;

    void SetLineVisible(bool InVisible);
    void SetPlayerState(class AFSDPlayerState* InPlayerState);
    void SetIsTalking(bool IsTalking, bool& OutTalking);
    void SetPlayerName(FString NewName);
    void Construct();
    void OnTalkingChanged(bool IsTalking);
    void ExecuteUbergraph_UI_PlayerSpeaking_WithName(int32 EntryPoint);
};

#endif
