#ifndef UE4SS_SDK_Console_DiscordEoMScreen_HPP
#define UE4SS_SDK_Console_DiscordEoMScreen_HPP

class UConsole_DiscordEoMScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* avatar;
    class UCanvasPanel* AvatarPanel;
    class UTextBlock* FlavorTextBlock;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UTextBlock* NameTextBlock;
    class UTextBlock* Online;
    class UTextBlock* Total;
    class ABP_PlayerController_SpaceRig_C* Player;
    float TimeSinceLastUpdate;
    int32 CurrentPresence;
    int32 CurrentMember;
    int32 PreviousPresence;
    int32 PreviousMember;
    FText PlayerNameText;
    FText FlavorText;
    FConsole_DiscordEoMScreen_CScreenChanged ScreenChanged;
    void ScreenChanged();
    TArray<FText> FlavorTextOptions;

    void ClearText();
    void OnFail_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic* Texture);
    void OnSuccess_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic* Texture);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateUI(const FDiscordServerData& discordServerCount);
    void Do Running Text(FText Text, int32 Index, class UTextBlock* Target);
    void PreConstruct(bool IsDesignTime);
    void On EoM Data Received(bool HasEoM);
    void OpenDescriptions();
    void Player Name Running Effect();
    void Player Flavor Text Running Effect();
    void ExecuteUbergraph_Console_DiscordEoMScreen(int32 EntryPoint);
    void ScreenChanged__DelegateSignature();
};

#endif
