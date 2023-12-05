// Copyright (c) 2023 CINN Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "paddle/cinn/ir/ir.h"
#include "paddle/cinn/ir/ir_base.h"
#include "paddle/cinn/ir/ir_mutator.h"

namespace cinn {
namespace ir {
namespace analyzer {

bool HasBlock(const std::vector<Expr>& exprs, const std::string& block_name);

std::vector<Expr> GetLoops(const std::vector<Expr>& exprs,
                           const std::string& block_name);

std::vector<Expr> GetLoops(const std::vector<Expr>& exprs, const Expr& block);

std::vector<Expr> GetAllBlocks(const std::vector<Expr>& exprs);

std::vector<Expr> GetChildBlocks(const Expr& expr);

Expr GetBlock(const std::vector<Expr>& exprs, const std::string& block_name);

Expr GetRootBlock(const std::vector<Expr>& exprs, const Expr& expr);

DeviceAPI GetDeviceAPI(const std::vector<Expr>& exprs);

Expr AddUnitLoop(const std::vector<Expr>& exprs, const Expr& block);

}  // namespace analyzer
}  // namespace ir
}  // namespace cinn