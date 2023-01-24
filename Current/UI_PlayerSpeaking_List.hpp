#ifndef UE4SS_SDK_UI_PlayerSpeaking_List_HPP
#define UE4SS_SDK_UI_PlayerSpeaking_List_HPP

class UUI_PlayerSpeaking_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Box_Horizontal;
    class UVerticalBox* Box_Vertical;
    TArray<class UUI_PlayerSpeaking_WithName_C*> Entries;
    bool Vertical;
    TArray<class AFSDPlayerState*> PlayerStates;

    void CreateEntries();
    void GetPlayerStates(TArray<class AFSDPlayerState*>& OutStates);
    void GetPlayerState(int32 Index, class AFSDPlayerState*& State);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateEntries();
    void OnPlayerJoined(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave(class AFSDPlayerState* PlayerState);
    void ExecuteUbergraph_UI_PlayerSpeaking_List(int32 EntryPoint);
};

#endif
