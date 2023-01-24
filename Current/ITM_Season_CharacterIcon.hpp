#ifndef UE4SS_SDK_ITM_Season_CharacterIcon_HPP
#define UE4SS_SDK_ITM_Season_CharacterIcon_HPP

class UITM_Season_CharacterIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Driller;
    class UImage* Image_Engineer;
    class UImage* Image_Gunner;
    class UImage* Image_Scout;
    class UPlayerCharacterID* DrillerID;
    class UPlayerCharacterID* ScoutID;
    class UPlayerCharacterID* GunnerID;
    class UPlayerCharacterID* EngineerID;

    void SetData(class UPlayerCharacterID* characterID, const bool ShowIcon);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Season_CharacterIcon(int32 EntryPoint);
};

#endif
