#ifndef UE4SS_SDK_Menu_SaveSlots_HPP
#define UE4SS_SDK_Menu_SaveSlots_HPP

class UMenu_SaveSlots_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* CharLevelBG;
    class UITM_TopBar_ResourceCounter_C* CreditsCounter;
    class UTextBlock* Header;
    class UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveLevel;
    class UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveRank;
    class UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry;
    class UITM_CurrentSaveSlot_Resources_C* ITM_CurrentSaveSlot_Resources;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_1;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_2;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_3;
    class UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry;
    class UBorder* PlayerRankBG;
    class UVerticalBox* SaveSlotsBox;
    class UBorder* SelectedSlot;
    class UBorder* SlotList;
    class UTextBlock* TXT_NumberOfSlotsLeft;
    FMenu_SaveSlots_CSettingsChanged SettingsChanged;
    void SettingsChanged();
    int32 NumberOfSlots;

    void Set Create New Saveslot Entry();
    void BindSaveslotEvents(class UITM_SaveSlot_Entry_C* SaveslotWidget);
    void Set Selected Save(class UFSDSaveGame* SaveSlot);
    void SetColors();
    void SetInitialSelectedSave();
    void CreateSaveSlots();
    void OnFailure_E9E78193470C6DFEB6754298C681AA76();
    void OnSuccess_E9E78193470C6DFEB6754298C681AA76();
    void Construct();
    void SaveDeleted();
    void SaveConverted();
    void PreConstruct(bool IsDesignTime);
    void SaveDetails(class UFSDSaveGame* SaveSlot);
    void SaveLoaded();
    void NewSaveslotCreated();
    void ExecuteUbergraph_Menu_SaveSlots(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
