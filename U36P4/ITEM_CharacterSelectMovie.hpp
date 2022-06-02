#ifndef UE4SS_SDK_ITEM_CharacterSelectMovie_HPP
#define UE4SS_SDK_ITEM_CharacterSelectMovie_HPP

class UITEM_CharacterSelectMovie_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* MoviePanel;
    class UMediaPlayer* DrillerMediaPlayer;
    class UPlayerCharacterID* LastCharacter;
    class UMediaTexture* DrillerTexture;
    class UMediaTexture* EngineerTexture;
    class UMediaTexture* GunnerTexture;
    class UMediaTexture* ScoutTexture;
    class UMediaPlayer* EngineerMediaPlayer;
    class UMediaPlayer* GunnerMediaPlayer;
    class UMediaPlayer* ScoutMediaPlayer;
    TArray<FSlateBrush> BrushList;
    bool Init;
    bool InitStarted;
    bool Built;

    void Collapse();
    void SetVideo(class UPlayerCharacterID* Character);
    void Construct();
    void InitPlayer();
    void BuildCharacterSelectionMovie();
    void ExecuteUbergraph_ITEM_CharacterSelectMovie(int32 EntryPoint);
};

#endif
