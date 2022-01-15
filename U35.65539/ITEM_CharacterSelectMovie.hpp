#ifndef UE4SS_SDK_ITEM_CharacterSelectMovie_HPP
#define UE4SS_SDK_ITEM_CharacterSelectMovie_HPP

class UITEM_CharacterSelectMovie_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* MoviePanel;
    UMediaPlayer* DrillerMediaPlayer;
    UPlayerCharacterID* LastCharacter;
    UMediaTexture* DrillerTexture;
    UMediaTexture* EngineerTexture;
    UMediaTexture* GunnerTexture;
    UMediaTexture* ScoutTexture;
    UMediaPlayer* EngineerMediaPlayer;
    UMediaPlayer* GunnerMediaPlayer;
    UMediaPlayer* ScoutMediaPlayer;
    TArray<FSlateBrush> BrushList;
    bool Init;
    bool InitStarted;
    bool Built;

    void Collapse();
    void SetVideo(UPlayerCharacterID* Character, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, bool CallFunc_Play_ReturnValue, bool CallFunc_Play_ReturnValue_1, bool CallFunc_Play_ReturnValue_2, bool CallFunc_Play_ReturnValue_3, bool CallFunc_Pause_ReturnValue, bool CallFunc_Pause_ReturnValue_1, bool CallFunc_Pause_ReturnValue_2, bool CallFunc_Pause_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6);
    void Construct();
    void InitPlayer();
    void BuildCharacterSelectionMovie();
    void ExecuteUbergraph_ITEM_CharacterSelectMovie(int32 EntryPoint, FSlateBrush K2Node_MakeStruct_SlateBrush, int32 CallFunc_Array_Add_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush_1, FSlateBrush K2Node_MakeStruct_SlateBrush_2, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, FSlateBrush K2Node_MakeStruct_SlateBrush_3, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_OpenSource_ReturnValue, bool CallFunc_OpenSource_ReturnValue_1, bool CallFunc_IsReady_ReturnValue, bool CallFunc_IsReady_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsReady_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsReady_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_OpenSource_ReturnValue_2, bool CallFunc_OpenSource_ReturnValue_3);
}

#endif
