#ifndef UE4SS_SDK_HUD_CharacterBeerLabel_HPP
#define UE4SS_SDK_HUD_CharacterBeerLabel_HPP

class UHUD_CharacterBeerLabel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BarBuff;
    class UTemporaryBuff* buff;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CharacterBeerLabel(int32 EntryPoint);
};

#endif
