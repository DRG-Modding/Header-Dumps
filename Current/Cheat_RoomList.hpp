#ifndef UE4SS_SDK_Cheat_RoomList_HPP
#define UE4SS_SDK_Cheat_RoomList_HPP

class UCheat_RoomList_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* RoomsVertBox;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_DNA;
    class UTextBlock* TextBlock_Lvl;
    class UVerticalBox* VertBox;
    class UTerrainMaterial* Material;

    void Construct();
    void BP_OnRefresh();
    void ExecuteUbergraph_Cheat_RoomList(int32 EntryPoint);
};

#endif
