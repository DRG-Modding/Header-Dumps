#ifndef UE4SS_SDK_HUD_PlayerName_Label_HPP
#define UE4SS_SDK_HUD_PlayerName_Label_HPP

class UHUD_PlayerName_Label_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_PlayerName;
    class UInvalidationBox* InvalidationBox_1;
    class UUI_PlayerSpeaking_C* PlayerSpeakingIcon;

    void UpdateCharacterName();
    void Construct();
    void OnPlayerNameChanged(FString NewName);
    void PreConstruct(bool IsDesignTime);
    void SetupSpeakIcon();
    void RefreshIconVisibility();
    void ExecuteUbergraph_HUD_PlayerName_Label(int32 EntryPoint);
};

#endif
