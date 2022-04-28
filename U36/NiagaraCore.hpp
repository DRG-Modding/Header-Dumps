#ifndef UE4SS_SDK_NiagaraCore_HPP
#define UE4SS_SDK_NiagaraCore_HPP

class UNiagaraMergeable : public UObject
{
};

class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
};

struct FNiagaraCompileHash
{
    TArray<uint8> DataHash;

};

#endif
