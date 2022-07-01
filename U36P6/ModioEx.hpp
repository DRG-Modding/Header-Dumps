#ifndef UE4SS_SDK_ModioEx_HPP
#define UE4SS_SDK_ModioEx_HPP

struct FModioCreateModFileMemoryParams
{
    TArray<uint8> ModMemory;

};

class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary
{

    void K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params);
    bool K2_LoadModFileToMemory(class UModioSubsystem* Target, FModioModID ModId, TArray<uint8>& ModData);
};

#endif
