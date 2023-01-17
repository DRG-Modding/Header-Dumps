#ifndef UE4SS_SDK_UI_PlayerSpeaking_HPP
#define UE4SS_SDK_UI_PlayerSpeaking_HPP

class UUI_PlayerSpeaking_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* Basic_Image;
    float Size;
    class AFSDPlayerState* PlayerState;
    FUI_PlayerSpeaking_COnChanged OnChanged;
    void OnChanged(bool InTalking);
    bool CollapseWhenHidden;

    void PreConstruct(bool IsDesignTime);
    void OnTalkingChanged(bool IsTalking);
    void SetPlayerState(class AFSDPlayerState* NewPlayerState);
    void ExecuteUbergraph_UI_PlayerSpeaking(int32 EntryPoint);
    void OnChanged__DelegateSignature(bool InTalking);
};

#endif
